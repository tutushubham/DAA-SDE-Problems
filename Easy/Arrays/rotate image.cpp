#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void rotate(vector<vector<int>>& matrix) {       
        int rows = matrix.size();
        if(!rows or rows == 1) return;      
        for(int i = 0; i < rows; i++)
            for(int j = i; j < rows; j++) 
                swap(matrix[i][j], matrix[j][i]);
        for(int i = 0; i < rows; i++)
            reverse(matrix[i].begin(), matrix[i].end());      
    }
};

int main(){
	return 0;
}