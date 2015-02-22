#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
	char convert(int n){
		if (n==1)
			return 'A';
		else
			return 'A'+n-1;
	}

    string convertToTitle(int n) {
        string s;

        while (n>0){
        	if (n<=26){
        		s.push_back(convert(n));
        		break;
        	}
            else{
            	if (n%26==0){
            		s.push_back('Z');
            		n=(n-26)/26;
            	}
            	else{
					s.push_back(convert(n%26));
					n=(n-n%26)/26;
            	}
            }
        }

        string result;
        string temp=s;
        for(int i=0;i<s.size();i++){
        	result.push_back(temp.back());
        	temp.pop_back();
        }

        return result;
    }
};


int main(){
	Solution S;
//	cout<<S.convert(26)<<endl;
	cout<<S.convertToTitle(52);
}
