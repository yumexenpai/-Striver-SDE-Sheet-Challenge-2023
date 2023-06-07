
#include <bits/stdc++.h>
using namespace std;

void pascalTrinagle(int n ){

	long long ans = 1;

	cout << ans << endl;

	for(int i = 1 ; i< n ; i++){
		ans = ans *(n-i);
		ans = ans /i;

		cout << ans << "\n";
	}
	cout << endl;
}

int main()
{
   	
   int n = 5;
   pascalTrinagle(n);
   return 0;
}
