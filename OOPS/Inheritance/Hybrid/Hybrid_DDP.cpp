/*
--------------------------------------------------------------------------------------------------------------------------------
|                       Hybrid Inheritance [Deadly Diamond Problem] --> Ambiguity Problem(Duplication)                         |
--------------------------------------------------------------------------------------------------------------------------------

                                    A(no1)
                                    |
                            -----------------
                            |       |       |
                            B(no2)  |       C(no3)
                            |       |(no1)  |
                            -----------------
                                    |
                                    D(no4)
*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int no1;
};

class B : virtual public A
{
public:
    int no2;
};

class C : virtual public A
{ 
public:
    int no3;
};

class D : public B, public C
{
public:
    int no4;
};

int main()
{
    D obj;
    obj.no1 = 100;

    cout << "\nobj.no1 = " << obj.no1;

    return 0;
}