#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	char temp;

	int convert(char c){
		if (c=='A')
			return 1;
		else
			return c-'A'+1;
	}

    int titleToNumber(string s) {
        int d=s.size();

        if (d==1)
        	return convert(s[0]);
        else{
        	temp=s[d-1];
        	s.pop_back();
        	return convert(temp)+26*titleToNumber(s);
        }

    }
};

int main(){
	Solution S;
	string s="AB";
	cout<<S.titleToNumber(s);
}
