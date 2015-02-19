#include<iostream>

using namespace std;

class Solution {
public:
    long Trail(int x)
    {
      long m=10;
      while (x%m==0)
        {
          m=m*10;
        }

      return m/10;
    }

    long Digit(int x)
    {
      long n=Trail(x)*10;

      while (x/n!=0)
      {
        n=n*10;
      }

      return n/10;
    }

    int reverse(int x)
    {
      long temp=x;

      if(x==0)
        return 0;

      else if(Trail(temp)==Digit(temp))
        return temp/Digit(temp);

      else
      {
	      if (x < 0) {
		  temp = -x;
//	   	  cout << temp << endl;
		  }

		  long result = 0;
		  int NewDigit = Digit(temp) / Trail(temp);

		  for (long i = Trail(temp) * 10; i <= Digit(temp); i = i * 10) {
			result = result + ((temp % i) / (i / 10)) * NewDigit;
			temp = temp - (temp % i);
			NewDigit = NewDigit / 10;
	   	  }

		  result = result + (temp / Digit(temp));

		  if (x < 0)
			result = -result;

		  return result;
      }
    }
};

int main()
{
  Solution S;
//   cout<<S.Trail(2147456574)<<endl;
//   cout<<S.Digit(2147456574)<<endl;
   cout<<S.reverse(2147456574);
}
