#include"iostream"
using namespace std;

class Solution {
public:
	long Digit(int x){
		if (x==0)
			return 1;

		else {
			long temp=1;
			while(x/temp!=0)
				temp=temp*10;

			return temp/10;
		}
	}

	int Res(int x){
		if (x<10 && x>=0)
			return x;

		else
			return x%10;
	}


    bool isPalindrome(int x) {
    	if (x<0)
    		return 0;

		if (x <= 9)
			return 1;

		long m = Digit(x);
		int n=1;
		while ( x / m == Res(x) ) {
			m=m/10;
			n=n*10;
			while (Res(x/m)==Res(x/n) && m>n){
				m=m/10;
				n=n*10;
			}
		}

		if ( m<=n )
			return 1;
		else
			return 0;
    }
};

int main(){
	Solution S;
//	cout<<S.Digit(1000021)<<endl;
//	cout<<S.Res(1000021)<<endl;
	cout<<S.isPalindrome(1000000001);
}
