#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int firstUniqChar(string s) {
       
        vector<int> charMap(26);
        
        for(char& ch : s){
            charMap[ch - 'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(charMap[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};

int main(){
	return 0;
}