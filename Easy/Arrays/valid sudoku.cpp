#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool validator(vector<vector<char>>& board, int x, int y, char u){
        for(int i=0;i<9;i++){
            if(board[x][i] == u and i!=y) return false;
            if(board[i][y] == u and i!=x) return false;
        }
        int row = x -(x%3);
        int col = y - (y%3);
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(board[row+i][col+j] == u and row+i!=x and col+j!=y) return false;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                if(board[i][j] != '.' and !validator(board, i, j, board[i][j]))
                    return false;

        return true;
    }
};

int main(){
	return 0;
}