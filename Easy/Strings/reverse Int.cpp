#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int reverseInt(int x) {
        int a = INT_MAX / 10;
        int b = INT_MIN / 10;
        
        int ans = 0;
        while (x)
        {
            if (a < ans || b > ans) return 0;
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        
        return ans;
    }
};

int main(){
	return 0;
}