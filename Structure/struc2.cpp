#include <iostream>
using namespace std;
#include <string.h>
#define SIZE 2

struct Students
{
    int rno;
    char name[30];
    int std;
    int total;
    float maths, sci, ss;
    float per;
} s[SIZE];

int main()
{
    int i;
    int total, per;

    for (i = 0; i < SIZE; i++)
    {
        cout << "\nEnter the Name : ";
        cin >> s[i].name;
        cout << "\nEnter the Roll No : ";
        cin >> s[i].rno;
        cout << "\nEnter the std : ";
        cin >> s[i].std;
        cout << "\nEnter the Marks of Maths : ";
        cin >> s[i].maths;
        cout << "\nEnter the Marks of sci : ";
        cin >> s[i].sci;
        cout << "\nEnter the Marks of ss : ";
        cin >> s[i].ss;

        s[i].total = s[i].maths + s[i].sci + s[i].ss;

        s[i].per = s[i].total / 3;
    }

    cout << "\nNAME\trno\tSTD\tMATHS\tSCI\tSS\tPER";
    cout << "\n-----------------------------------------------------------------";
    for (i = 0; i < SIZE; i++)
    {
        cout << "\n"
             << s[i].name << "\t" << s[i].rno << "\t" << s[i].std << "\t" << s[i].maths << "\t" << s[i].sci << "\t" << s[i].ss << "\t" << s[i].per;
    }

    return 0;
}