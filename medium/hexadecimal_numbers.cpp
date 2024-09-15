#include <iostream>
#include <cmath>
using namespace std;

int arraytonumber(int arr[],int n){
	int res = 0;
	int k = n-1;
	for(int i=k; i >= 0;i--){
		res += arr[i] * pow(10,(k-i));
	}
	return res;
}

//void printtest(int arr[], int n){
//	cout << "->";
//	for(int i=0;i<n;i++){
//		cout << "[" << arr[i] << "]";
//	}
//	cout << endl;
//}

void hexainc(int arr[],int n){
	int k = n-1;
	if(arr[k] == 0){
		arr[k] = 1;
	}else{
		for(int i=k;i>=0;i--){
			if(arr[i] == 0){
				arr[i] = 1;
				break;
			}else{
				arr[i] = 0;
				if(arr[i-1] == 1){
					arr[i-1] = 0;
					i--;
				}else{
					arr[i-1] = 1;
					break;
				}
			}
		}	
	}
	
}

int main(){
	int n,digits = 0;
	cin >> n;
	int number = n;
	while(n>0){
		n = n / 10;
		digits ++;
	}
	int arr[digits];
	for(int i=0;i<digits;i++){
		arr[i] = 0;
	}
	int count = 0;
	int k = digits-1;

	for(int i=0; i < pow(2,digits)-1 ; i++){
		hexainc(arr,digits);
		if(arraytonumber(arr,digits) <= number){
			count ++;	
		}else{
			break;
		}
	}
	cout << count;
	
}
