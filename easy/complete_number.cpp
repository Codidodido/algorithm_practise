#include <iostream>
using namespace std;

int main(){
	int n, a = 1;
	cin >> n;
	for(int i = 2 ; i <= n/2 ; i++){
		if(n%i == 0){
			a += i;
		}
	}
	
	if(a == n){
		cout << "YES";
	}else{
		cout << "NO";
	}
}