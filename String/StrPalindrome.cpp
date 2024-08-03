/*	Palindrome String	*/
#include <iostream>
using namespace std;
#include <string.h>

int main()
{
	int len = 0;
	int i, j;
	int flag = 1;
	char str[30];

	cout << "\nEnter the string : ";
	cin >> str;

	len = strlen(str);

	for (i = 0, j = (len - 1); i < len; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = 0;
			break;
		}
	}

	if (flag)
	{
		cout << endl
			 << str << " is Palindrome";
	}
	else
	{
		cout << endl
			 << str << " is not Palindrome";
	}

	return 0;
}
