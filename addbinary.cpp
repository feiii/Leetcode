#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
    	string a1, b1;
    	if (a.size()==b.size()){
    		a1=a;
    		b1=b;
    	}
    	else{
			a1=(a.size()>b.size())? a : b;
			b1=(a.size()>b.size())? b : a;
    	}

    	int lb=b1.size();
    	int la=a1.size();
        string c;
        c[la-1]='0';

        for(int i=1; i<=lb; i++){
			if ( a1[la - i] == '1' && b1[lb - i] == '1') {
				if (c[la - i] == '0')
					a1[la - i] = '0';
				else if (c[la - i] == '1')
					a1[la - i] = '1';

				if (i==la)
				    a1.insert(0, 1,'1');
				else
				    c[la - i - 1] = '1';

			}
			else {
				if (a1[la - i] == '0' && b1[lb - i] == '0') {
					a1[la - i] = c[la - i];
					c[la - i - 1] = '0';
				}
				else {
					if (c[la - i] == '0') {
						a1[la - i] = '1';
						c[la - i - 1] = '0';
					}
					else if (c[la - i] == '1') {
						a1[la - i] = '0';
						c[la - i - 1] = '1';
					}
				}
			}
        }

		for (int j = lb + 1; j <= la; j++) {
			if (!(c[la-j] == '1' && a1[la-j] == '1')) {
				if ( c[la-j]=='0' && a1[la-j]=='0' )
					a1[la-j]='0';
				else
					a1[la-j]='1';
				c[la-j - 1] = '0';
			}
			else {
				a1[la-j] = '0';
				if( la-j!=0 )
				    c[la-j - 1] = '1';
				else
					a1.insert(0,1,'1');
			}
		}

        return a1;
    }
};

int main(){
	Solution S;
	string a="100";
	string b="110010";
    cout<<'0'+'1'-96<<endl;
	cout<<S.addBinary(a,b);
}
