#include<iostream>
using namespace std;

class Solution{
public:
  double pow(double x, int n){
    if (n==0)
	  return 1;

	else if (n>0){
    	double h=pow(x,n/2);

    	if (n%2==0)
    	  h=h*h;
    	else
    	  h=h*h*x;

    	return h;
	}

	else{
	  if (n>-2147483648)
	    return 1.0/pow(x,-n);
	  else
        return 1.0/(pow(x,-n-1)*x);
    }
  }
};

int main(){
 Solution S;
 cout<<S.pow(3,3);
}
