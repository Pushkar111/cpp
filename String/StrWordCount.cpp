/* Word Count in String */

#include <stdio.h>
using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    char str[1000];
    int i = 0, j = 1, k = 0;
    int dup;

    cout << "\nEnter the String : ";
    gets(str);

    i = 0;
    while (i < strlen(str))
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            j++;
        }
        else
        {
            k++;
        }
        i++;
    }

    cout << "Word Count = " << j;

    return 0;
}
