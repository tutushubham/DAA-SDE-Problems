#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<int> plusOne(vector<int>& digits) {
        
        for(int i=digits.size()-1;i>=0;--i) {
            if(digits[i]==9) digits[i]=0;
            else{
                digits[i]++;
                return digits;
            }
        }
        //if case is 99 then after loop it will become 00 so we have to make it 100
        digits.emplace(digits.begin(),1); // 10,20,30 emplace 15 -> 15,10,20,30
        return digits;
    }
};

int main(){
	return 0;
}