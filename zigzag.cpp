#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convert(string s, int nRows) {
    	string out;

    	if (nRows>=s.size() || nRows==1)
    	    out=s;

    	else{
			int k=nRows-1+nRows-2;
			for(int i=0;i<s.size();i=i+k+1)
				out.push_back(s[i]);

			int j=1;
			while(j<nRows-1){
				for(int m=j; m<s.size(); m=m+k+1){
					out.push_back(s[m]);
					if(m+k-2*j+1<s.size())
					    out.push_back(s[m+k-2*j+1]);
				}
				j=j+1;
			}

			for(int n=nRows-1;n<s.size();n=n+k+1)
				out.push_back(s[n]);
    	}

    	return out;
    }
};

int main(){
	Solution S;
	cout<<S.convert("ABCDE",4);
}
