
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


 void nextPermutation(vector<int>& nums){
 	int indx = -1;
 	int n = nums.size();

 	for(int i = n-2 ; i>=0 ; i--){
 		if(nums[i] < nums[i+1]){
 			indx = i;
 			break;
 		}
 	}

 	if(indx == -1){
 		reverse(nums.begin() , nums.end());
 		return;
 	}

 	for(int i = n-1 ; i>=0 ; i--){
 		if(nums[i] > nums[indx] ){
 			swap(nums[i] , nums[indx]);
 			break;
 		}
 	}

 	reverse(nums.begin() + indx+1 , nums.end());


 }

int main(){

	int n ;
	cin >> n  ;
	vector<int>nums(n);
	// int arr[n];


	for(int i =0 ; i<n ; i++){
		cin >> nums[i];
	}

	// vector<int> ans;
	

	nextPermutation(nums);

	for(int i =0 ; i<n ; i++){
		cout << " " << nums[i];
	}
	
	return 0;

}



