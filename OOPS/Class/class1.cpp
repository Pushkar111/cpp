#include<iostream>
using namespace std;
#include<string.h>

class Student
{
public:
	// scope - default scope --- [private--access within class]
				   //  [public--can access everywhere]
	int rno;
	char name[50];
	int std;
};

int main()
{
	Student s;

	//class type variable -- object
	s.rno = 1;
	strcpy(s.name,"Pushkar");
	s.std = 12;
	cout<<"\nRno : "<<s.rno;
	cout<<"\nName : "<<s.name;
	cout<<"\nStd : "<<s.std;

    return 0;
}