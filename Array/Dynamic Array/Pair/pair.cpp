#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    pair<int,char[50]> p;

    p.first = 10;
    strcpy(p.second,"Rahul");
    cout << p.first << " " << p.second;
    return 0;
}
