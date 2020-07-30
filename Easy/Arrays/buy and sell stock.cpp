#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	//buy and sell stock
	int profit(vector<int>& prices){
		int n = prices.size();
		if(n==0)return 0;
		int maxprof =0;
		
		for(int i=1; i<n; i++){
			if(prices[i]>prices[i-1]){
				maxprof += prices[i] - prices[i - 1];
			}
		}
		
		return maxprof;
	}
};

int main(){
	return 0;
}