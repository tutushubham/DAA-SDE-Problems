#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void rotate(vector<int>& nums, int k) {
        
        int len = nums.size();
        int t=0;
        k = k%len;
        while(k){
           
            t = nums[len-1];
            for(int i=len-1; i>0; i--){
                nums[i]=nums[i-1];
            }
            nums[0]=t;
            k--;
            
        }
        
    }
    void rotateReverse(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

int main() {
	// your code goes here
	return 0;
}