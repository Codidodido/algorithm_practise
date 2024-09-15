#include <iostream>
using namespace std;

int main(){
	string inp;
	int r=0,y=0,g=0;
	cin >> inp;
	for(int i=0; i < inp.length(); i++){
		if(inp[i] == 'Y'){
			y++;
		}else if(inp[i] == 'R'){
			r++;
		}else{
			g++;
		}
	}

	if((r >= 3) || (r>=2 && y >= 2) || (g==0)){
		cout << "nakhor lite";
	}else{
		cout << "rahat baash";
	}
}