#include <iostream>
using namespace std;
#include <string.h>
#define SIZE 2

class Product
{
    // class property -> (1) DM + (2) MF
    // default - within class
private:
    // (1) Data Member
    int id;
    int price, qty, bill;
    char name[50], SellerName[50], BuyerName[50];

public:
    // (2) Member Function --> -- function (JS) -- class -- Method(OOPS)
    void scanData()
    {
        cout << "\nEnter ID : ";
        cin >> id;
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "\nEnter Price : ";
        cin >> price;
        cout << "\nEnter QTY : ";
        cin >> qty;
        bill = qty * price;
        cout << "\nEnter SellerName : ";
        gets(SellerName);
        cout << "\nEnter BuyerName : ";
        gets(BuyerName);
    }

    void dispData()
    {
        cout << "\n" << id << "\t" << name << "\t" << price << "\t" << qty << "\t" << bill << "\t" << SellerName << "\t\t" << BuyerName;
    }
};

int main()
{
    Product p[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        p[i].scanData();
    }

    cout << "\nID\tName\tPrice\tQTY\tBill\tSellerName\tBuyerName";
    cout << "\n---------------------------------------------------------------------------------------------";
    for (i = 0; i < SIZE; i++)
    {
        p[i].dispData();
    }

    return 0;
}