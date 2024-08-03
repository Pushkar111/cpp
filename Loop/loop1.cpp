#include<iostream>
using namespace std;
#define SIZE 15

int main()
{
	int i;

	for(i=1;i<=SIZE;i++)
	{
		cout<<"\t"<<i;
	}
	cout<<endl<<"------------------------------------------------------------";
	cout<<endl;
	i=1;
	while(i<=SIZE)
	{
		cout<<"\t"<<i;
		i++;
	}
	cout<<endl<<"-----------------------------------------------------------";
	cout<<endl;
	i=1;
	do
	{
		cout<<"\t"<<i;
		i++;
	}while(i<=SIZE);

    return 0;
}