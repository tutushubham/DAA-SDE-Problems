#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        int n1,n2;
        n1 = nums1.size();
        
        for(int i=0; i<n1; i++){
            map[nums1[i]]++;
        }
        
        n2 = nums2.size();
        vector<int> ans;
        
        for(int i=0; i<n2; i++){
            if(map[nums2[i]]>0){
                ans.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }
        
        return ans;
        
    }
};

int main(){
	return 0;
}