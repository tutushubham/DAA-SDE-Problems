#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int removeDuplicate(vector<int> &nums){ //remove dup from sorted array and return length
		if(nums.size()==0) return 0;
		int i=0;
		for(int j=1; j<nums.size(); j++){
			if(nums[j]!=nums[i]){
				i++;
				nums[i]=nums[j];
			}
		}
		return i+1;
	}
};

int main(){
	return 0;
}