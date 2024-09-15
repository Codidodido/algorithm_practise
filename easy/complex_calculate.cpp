#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int fact(int n)
{
    if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


int main(){
	int n,x,a,res = 0;
	scanf("%d%d%d",&a,&x,&n);
	for(int k = 0; k <= n ; k++){
		res += nCr(n,k)*pow(x,k)*pow(a,n-k);
	}
	cout << res;
}