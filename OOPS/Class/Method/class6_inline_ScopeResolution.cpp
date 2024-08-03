#include <iostream>
using namespace std;
#include <string.h>

struct Student
{
private:
    int rno;
    char name[100];
    int std;

public:
    inline void scanData();
    inline void dispData();
};
// Member Function -> inline function
// Scope Resolution Operator (::) -> "Member of"
inline void Student ::scanData()
{
    cout << "Enter Rno : ";
    cin >> rno;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Std : ";
    cin >> std;
}

inline void Student ::dispData()
{
    cout << "\n"
         << rno << "\t" << name << "\t" << std;
}

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        s[i].scanData();
    }

    for (i = 0; i < 5; i++)
    {
        s[i].dispData();
    }
    return 0;
}