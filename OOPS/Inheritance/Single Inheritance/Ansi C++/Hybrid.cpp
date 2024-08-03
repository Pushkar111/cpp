/*
-----------------------------------------------------------------
|                   Hybrid Inheritance                          |
-----------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number()
    {
        cout << "Roll No: " << roll_number << endl;
    }
};

class Test : public Student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks()
    {
        cout << "Marks obtained: "
             << "\n"
             << "Part1: " << part1 << endl
             << "Part2: " << part2 << endl;
    }
};

class Sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "Sports wt: " << score << "\n\n";
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display();
};

void Result ::display()
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total Score: " << total << "\n";
}

int main()
{
    Result s1;

    s1.get_number(1234);
    s1.get_marks(27.5, 33.0);
    s1.get_score(6.0);
    s1.display();

    return 0;
}