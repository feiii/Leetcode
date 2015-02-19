#include<iostream>
using namespace std;

class Solution{
public:
  int atoi(string str){
	if (str=="0")
		return 0;

	if (str=="")
		return 0;

    string s;
    s=str;
    int i=0;
	while( s[i]==' ' && i<s.size() )
	  i=i+1;

    s.erase(0, i);

	int sign;
	if (s[0]=='-'){
		sign=-1;
		s.erase(0,1);
	}
	else if (s[0]=='+'){
		sign=1;
		s.erase(0,1);
	}
	else
		sign=1;

	while (s[0]=='0')
	    s.erase(0,1);

    if ( !(s[0]>'0' && s[0]<='9') )
	    return 0;

   	cout<<s<<endl;

	if ( i == str.size() )
	  return 0;

	else{
		int j=0;
		while( (s[j]>='0' && s[j]<='9') && j<s.size())
		  j=j+1;

		if (j!=s.size())
			s.erase(j, s.size()-j+1);
		cout<<s<<endl;

		int digit=s.size();
		long ans=0;
		long temp=1;
		for (int k=1; k<=digit && ans<=2147483648; k++){
			  ans=ans+(s[s.size()-1]-48)*temp;
			  temp=temp*10;
			  s.pop_back();
		}

		cout<<ans<<endl;

		if (ans > 2147483647 && sign == 1) {
			return 2147483647;
		}
		else if (ans > 2147483648 && sign == -1) {
			return -2147483648;
		}
		else
		    return ans*sign;
	}
  }
};

int main(){
  Solution S;
  string p;
  p="9223372036854775809";
  cout<<S.atoi(p)<<endl;
//  string q="5";
//  cout<<q[0]-48;
}
