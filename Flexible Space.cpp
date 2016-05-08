#include <iostream>


int main()
{
  using namespace std;

  int width;
  int numOfboard;

  cin >> width >> numOfboard;
  int* boardArr = new int[numOfboard];
  bool* widthArr = new bool[width+1];
  for(int i = 0; i < numOfboard; i++) 
  { 
      cin >> boardArr[i];
      widthArr[boardArr[i]] = true;
      widthArr[width-boardArr[i]] = true;
  }

  for (int i = 0; i < numOfboard; i++)
    {
      for (int j = i+1; j < numOfboard; j++)
	{
	  widthArr[boardArr[j]-boardArr[i]]  = true;
	}
    }
  widthArr[width] = true;

  for(int i = 0; i< width+1; i++)
    {
      if (widthArr[i] == true)
	{
	  cout << i << " " << endl;
	}
    }
  return 0;
  
}