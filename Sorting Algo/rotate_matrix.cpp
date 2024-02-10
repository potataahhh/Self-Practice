// O(N2) TC
// O(N2) SC

#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> rotate(vector<vector<int>> &matrix){
// 	int n = matrix.size();

// 	vector<vector<int>> res(n,vector<int>(n,0));

// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			res[j][n-1-i] = matrix[i][j];
// 		}
// 	}
// 	return res;
// }

void rotate(vector<vector<int>> &matrix){
	int n = matrix.size();

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(matrix[i][j],matrix[j][i]);
		}
	}

	for(int i=0;i<n;i++){
		reverse(matrix[i].begin(),matrix[i].end());
	}
}

int main(){
	 vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector < vector < int >> rotated = rotate(arr);
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    }
 
}


