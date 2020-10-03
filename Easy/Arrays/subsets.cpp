//Given a set of distinct integers, nums, return all possible subsets (the power set).

//Note: The solution set must not contain duplicate subsets.


class Solution {
public:
    void backtrack(vector<vector<int>> &w,vector<int> v, vector<int> &nums, int index){
        w.push_back(v);
        for(int i=index;i<nums.size();i++){
            v.push_back(nums[i]);
            backtrack(w,v,nums,i+1);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> w;
        backtrack(w,v,nums,0);
        return w;
    }
};
