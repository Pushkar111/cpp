/*
-----------------------------------------------------------------
|                   Single Inheritance : Public                 |
-----------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class B
{
    int a; // private; not inheritable

public:
    int b; // public; ready for inheritance
    void set_ab();
    int get_a(void);
    void show_a(void);
};

class D : public B // public derivation
{
    int c;

public:
    void mult(void);
    void disp(void);
};
//----------------------------------------------------------------
void B ::set_ab(void)
{
    a = 5;
    b = 10;
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
    c = b * get_a(); // c = b * a
}
void D ::disp()
{
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}
//----------------------------------------------------------------

int main()
{
    D d;

    d.set_ab();
    d.mult();
    d.show_a();
    d.disp();

    d.b = 20;
    d.mult();
    d.disp();

    return 0;
}