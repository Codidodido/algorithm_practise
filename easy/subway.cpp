#include <iostream>
using namespace std;

int main(){
	string line1,line2;
	int counter = 0;
    getline(cin,line1);
    getline(cin,line2);
    for(int i=0; i < line1.length(); i++){
    	if(line1[i] == '1' && line2[i] == '1'){
    		counter++;
		}
	}
	cout << counter;
}