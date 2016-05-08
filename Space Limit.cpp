#include <iostream>

int main()
{
	using namespace std;

	int speed = 0;
	int time = 0;
	int flag = 0;
	int distance = 0;
	int elapseTime = 0;

	cin >> flag;
	while(flag != -1)
	{
		for(int i = 0; i < flag; i++) 
                { 
                        cin >> speed >> time;
			if (time > elapseTime)
			{
			  distance += speed*(time-elapseTime);
			}
			elapseTime = time;
		}
	  cout << distance << " miles" << endl; distance = 0; 
          elapseTime = 0; 
          cin >> flag;
	}
	return 0;
}