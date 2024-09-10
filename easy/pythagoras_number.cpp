#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[3];
	int temp;
	for(int i=0;i < 3;i++){
		cin >> arr[i];
	}
	for(int i=0; i < 2;i++){
		if(arr[i] > arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	if(pow(arr[0],2)+pow(arr[1],2)==pow(arr[2],2)){
		cout << "YES";
	}else{
		cout << "NO";
	}
}