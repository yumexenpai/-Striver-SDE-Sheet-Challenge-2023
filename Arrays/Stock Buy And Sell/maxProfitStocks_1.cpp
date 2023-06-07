
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfitStocks_1(vector<int>& prices){
	
	int minprofit = prices[0];
	int profit =0;

	for(int i =0 ; i< prices.size() ; i++){
		if(prices[i] < minprofit){
			minprofit = prices[i];
		}

		else if(prices[i] -minprofit > profit){
			profit = prices[i] - minprofit;
		}
	}
	return profit;
}

   
int main(){

	int n ;
	cin >> n;

	vector<int>ans(n);

	for(int i =0 ; i< n ; i++){
		cin >> ans[i];
	}

	int res = maxProfitStocks_1(ans);

	cout << res;
	

}



