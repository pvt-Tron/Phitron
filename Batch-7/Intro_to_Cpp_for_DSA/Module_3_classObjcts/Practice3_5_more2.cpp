#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
	int jersey_no;
	char country[101];
};
int main()
{
    Cricketer* donji = new Cricketer;
    donji->jersey_no = 10;
    strcpy(donji->country, "Italy");

    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = donji->jersey_no;
    strcpy(kohli->country, donji->country);
    delete donji;
    cout << kohli->country << " " << kohli->jersey_no;

    return 0;
}