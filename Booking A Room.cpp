#include <iostream>

int main()
{
  using namespace std;

  int allRoomNum, bookedNum;
  int bookedRoom;
  bool available = false;
  
  cin >> allRoomNum >> bookedNum;
  bool* room = new bool[allRoomNum+1];

  for (int i = 0; i < bookedNum; i++) 
  { 
      cin >> bookedRoom;
      room[bookedRoom] = true;
  }

  
  for(int i = 1; i < allRoomNum+1; i++)
    {
      if (room[i] == false)
      {
        cout << i << endl;
        available = true;
        break;
      }
    }
  if (!available)
    {
      cout << "too late" << endl;
    }
  
  return 0;
  
  
}