#include <iostream>

void getOriginalNum(double num, double* caseResult);

int main()
{
  using namespace std;
  
  int testCase;
  int stops = 0;
  int index = 0;
  
  cin >> testCase;
  double* caseResult = new double[testCase];
  while(testCase--)
    {
      cin>>stops;
      *(caseResult+index) = 0;
      getOriginalNum(stops, caseResult+index);
      index++;
    }
  for(int i = 0; i<index; i++)
    {
      cout << static_cast(*(caseResult+i)) << endl;
    }
  return 0;
}


void getOriginalNum(double num, double* caseR)
{
  if (num == 0)
    {
      return;
    }
  else {
    *caseR += 0.5;
    *caseR *= 2;
    getOriginalNum(--num, caseR);
  }
}