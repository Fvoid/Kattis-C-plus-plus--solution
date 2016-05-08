#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string passWord = "";
	string message = "";
	int passLen = 0;
	int messLen = 0;
	int passIndex = 0;
	int messIndex = 0;


	cin >> passWord >> message;
	passLen = passWord.length();
	messLen = message.length();

	while(passLen >= passIndex && messIndex <= messLen)
	{
		if (passWord[passIndex] == (message[messIndex]))
		{
			passIndex++;
			messIndex++;
			continue;
		}
		else
		{
			if(passWord.substr(passIndex,passWord.length()).find(message[messIndex]) != string::npos)
			{
				cout << "FAIL" << endl;
				return 0;
			}
			else
			{
				messIndex++;
			}
		}
	}

	if (passLen != (passIndex-1))
	{
		cout << "FAIL" <<endl;
		return 0;
	}
	cout << "PASS" << endl;

	return 0;
}