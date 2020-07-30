#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
    	unordered_map<int,int> map1;
    
    	for(int i=0;i<n;i++)
    	{
        	map1[nums[i]]++;
    	}
    	
    	for(int i=0;i<n;i++)
    	{
            if(map1[nums[i]] >1)
            	return true;
    	}
    	
    	return false;
    }
};

int main(){
	return 0;
}