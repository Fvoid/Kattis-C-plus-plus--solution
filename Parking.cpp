#include <iostream>

int main()
{
  using namespace std;

  int priceA;
  int priceB;
  int priceC;

  int startA, endA;
  int startB, endB;
  int startC, endC;
  bool timeRange[101];

  cin >> priceA >> priceB >> priceC;
  cin >> startA >> endA;
  cin >> startB >> endB;
  cin >> startC >> endC;

  int startRange[]{startA, startB, startC};
  int endRange[]{endA, endB, endC};
  int min = startA;;
  int max = endA;
  int totalPay = 0;
  for(int i = 1; i < 3; i++)
    {
      if (startRange[i] < min) 
      { min = startRange[i]; } 

      if (endRange[i] > max)
      {
        max = endRange[i];
      }
    }

  for (double i = min+0.5; i < max; i++)
    {
      int price = 0;
      int numOfCar = 0;
      if (startA <= i && i <= endA)
    {
      numOfCar++;
    }
      if (startB <= i && i <= endB)
    {
      numOfCar++;
    }
      if (startC <= i && i <= endC)
    {
      numOfCar++;
    }

      switch(numOfCar)
    {
       case 0:break;
       case 1: price = priceA; break;
       case 2: price = priceB; break;
       case 3: price = priceC; break;
    }
      totalPay += price*numOfCar;
    }

  cout << totalPay << endl;
  return 0;
}