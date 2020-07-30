#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool isPalindrome(string s) {
	    int a = 0;
	    int b = s.size() - 1;
	    while(a < b){
	        while(!((s[a] >= 'a' && s[a] <= 'z') ||(s[a] >= 'A' && s[a] <= 'Z') || isdigit(s[a]))){
	            a++;
	            if(a > b)
	                break;
	        }
	        while(!((s[b] >= 'a' && s[b] <='z') ||(s[b] >= 'A' && s[b] <='Z') || isdigit(s[b]))){
	            b--;
	            if( b < a)
	                break;
	        }
	        
	        if((a < b) && (tolower(s[a]) != tolower(s[b])))
	            return false;
	        a++;
	        b--;
	    }
	    return true;
	}
};

int main(){
	return 0;
}