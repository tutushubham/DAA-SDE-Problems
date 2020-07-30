#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void reverseString(vector<char>& str) {
        for(int i=0;i<str.size()/2;i++){
    		char temp=str[i];
    		str[i]=str[str.size()-i-1];
    		str[str.size()-i-1]=temp;
		}
    }
};

int main(){
	return 0;
}