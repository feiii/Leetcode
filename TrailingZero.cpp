#include<iostream>
using namespace std;

class Solution {
public:

	int GetFive(int n){
		int temp = n;
		int result = 0;

		while (temp >= 5) {
			result = result + temp/5;
			temp=temp/5;
		}

		return result;
	}

    int trailingZeroes(int n) {
    	if(n<5)
    		return 0;

    	else
    		return GetFive(n);
    }

};

int main(){
	Solution S;
	cout<<S.trailingZeroes(1808548329);
}
