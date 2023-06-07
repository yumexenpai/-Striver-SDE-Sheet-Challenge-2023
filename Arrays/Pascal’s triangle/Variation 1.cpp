
#include <bits/stdc++.h>
using namespace std;

int nCr(int n , int r){
	long long res = 1;

	for(int i =0 ; i< r ; i++){
		res = res *(n-i);
		res = res /(i+1);
	}

	return res;
}

int pascalTrinagle(int r , int c){
	int ans = nCr(r ,c);
	return ans;
}


int main()
{
   	
   	int r;
   	int c;

   	cin >> r;
   	cin >> c;

   	int element = pascalTrinagle(r ,c);

   	cout<< element;



    return 0;
}
