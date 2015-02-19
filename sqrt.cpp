#include<iostream>
using namespace std;

class Solution {
public:
    int sqrt(int x) {
        long y=1;

        if(x==0)
        	return 0;

        else if(x<=3)
        	return 1;

        else if(x==4)
        	return 2;

        else
        {
			while(!(y*y<=x && (y+1)*(y+1)>=x)){
				y=(y+x/y)/2;
			}
        }

        return y;
    }
};

int main()
{
	Solution S;
	cout<<S.sqrt(2147395605);
}
