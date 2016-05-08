#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const string pattern = "Simon says";
	int numOfStr = 0;

	string inputStr = "";
	cin >> numOfStr;
	cin.ignore();

	for (int i = 0; i < numOfStr; i++)
	{
		getline(cin, inputStr);
		string simon = inputStr.substr(0, 10);
		if(simon.compare(pattern) == 0)
		{
			cout << inputStr.substr(11) << endl;
		}
	}
	return 0;
}