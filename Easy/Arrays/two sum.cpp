#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> N;
        
        vector<int> res;
        
        for(int i = 0; i < nums.size(); ++i) {
            
            int num = nums[i];
            
            if(N.count(target - num)) {
                res.push_back(i);
                res.push_back(N[target - num]);
            } else {
                N.insert({ num, i });
            }
            
        }
        return res;
    }
};

int main(){
	return 0;
}