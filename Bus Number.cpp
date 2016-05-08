#include <iostream>

int main()
{
  using namespace std;

  bool *busTotal = new bool[1001];

  int numOfBus;
  int busNum;
  int specialCount = 0;
  int start = 0;
  int end = 0;
  
  cin >> numOfBus;
  for (int i = 0; i < numOfBus; i++) { cin >> busNum;
      busTotal[busNum] = true;
    }

  for(int i = 1; i < 1001; i++)
    {
      if (busTotal[i] == true)
    {
      specialCount++;

      if (specialCount == 2)
        {
          if (busTotal[i+1] == true)
        {
          start = i-1;
        }
          else
        {
          cout << i-1 << " " << i << " "; } } if (specialCount > 1 && busTotal[i+1] == true)
        {
          continue;
        }
      else if (specialCount > 2)
        {
          cout << start << "-" << i << " ";
        }
      else if(busTotal[i+1] == false && busTotal[i-1] == false)
        {
          cout << i << " ";
        }
      
    }
      else {
    specialCount = 0;
      }
    }

  return 0;
}