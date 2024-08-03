/*
-----------------------------------------------------------------
|                   Single Inheritance : private                |
-----------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class B
{
    int a;

public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class D : private B
{
    int c;

public:
    void mult(void);
    void disp(void);
};
//----------------------------------------------------------------
void B ::get_ab(void)
{
    cout << "Enter values for a and b: ";
    cin >> a >> b;
}
int B ::get_a()
{
    return a;
}
void B ::show_a()
{
    cout << "a = " << a << endl;
}
void D ::mult()
{
    get_ab();
    c = b * get_a(); // 'a' connot be used directly
}
void D ::disp()
{
    show_a();
    cout << "b = " << b << "\n"
         << "c = " << c << "\n\n";
}
//----------------------------------------------------------------
int main()
{
    D d;
    // d.get_ab(); → WON'T WORK
    d.mult();
    // d.show_a(); → WON'T WORK
    d.disp();
    //d.b = 20; → WON'T WORK; b has become private

    d.mult();
    d.disp();
    return 0;
}