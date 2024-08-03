#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout << "\n\nUsing forLoop" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }

    cout << "\n\nUsing iterator" << endl;
    cout << "--------------------------------" << endl;
    vector<int>::iterator itr;
    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout << *itr << "\t";
    }

    cout << "\n\nUsing auto" << endl;
    cout << "--------------------------------" << endl;
    for (auto i : vec)
    {
        cout << i << "\t";
    }

    cout << "\n\nUsing range based forLoop" << endl;
    cout << "--------------------------------" << endl;
    for (int i : vec)
    {
        cout << i << "\t";
    }

    // ====================================================================

    vec.pop_back();
    vec.pop_back();
    vec.pop_back();

    cout << "\n\nAfter pop_back" << endl;
    cout << "--------------------------------" << endl;
    for (int i : vec)
    {
        cout << i << "\t";
    }
    
    return 0;
}