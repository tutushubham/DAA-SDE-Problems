#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()) return 0;
        
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;
        
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
            s2[t[i]]++;
        }
        for(auto i:s1){
            if(i.second!=s2[i.first]) 
                return 0;
        }
        
        return 1;
    }
};

int main(){
	return 0;
}