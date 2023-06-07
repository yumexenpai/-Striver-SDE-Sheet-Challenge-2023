
#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
	long long ans = 1;

	vector<int>ansRow;
	ansRow.push_back(1);

	for(int col = 1 ; col < row ; col++){
		ans = ans *(row - col);
		ans = ans / (col);
		ansRow.push_back(ans);
	}

	return ansRow;
}

vector<vector<int>> pascalTriangle(int numRow){

	vector<vector<int>> ans;

	for(int i = 1 ; i<= numRow ; i++){
		vector<int> temp = generateRow(i);
		ans.push_back(temp);
	}

	return ans;
}

int main()
{
   	
   int n = 5;

   vector<vector<int>> ans = pascalTriangle(n);

    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
   return 0;
}
