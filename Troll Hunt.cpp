#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int bridges = 0;
    int totalKnights = 0;
    int knightPerGroup = 0;
    int group = 0;
    double day = 0;

    cin >> bridges >> totalKnights >> knightPerGroup;
    bridges -= 1;
    if (knightPerGroup == 0)
    {
        return 0;
    }
    group = totalKnights / knightPerGroup;
    day = bridges / group;
    if (bridges % group > 0)
    {
      day += 1;
    }
    cout << (int) ceil(day) << endl;
    return 0;
}