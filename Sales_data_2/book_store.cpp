#include "Sales_data.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data total;
    int price;
    cout << "Pleas input a message of a book.\n" << endl;
    cin >> total.bookNo >> total.units_sold >> price;
    total.revenue += total.units_sold * price;

    Sales_data curr;
    cout << "Pleas input another message of the same book "
         << "or a new book.\n" << endl;
    while ( cin >> curr.bookNo )
    {
        int curr_price;
        cin >> curr.units_sold >> curr_price;
        if ( curr.bookNo == total.bookNo )
        {
            total.units_sold += curr.units_sold;
            total.revenue += curr_price * curr.units_sold;
        }
        else
        {
            cout << "The book " << total.bookNo << " was sold at "
                 << total.units_sold << " copies and the total"
                 << " revenue is " << total.revenue << ".\n" << endl;
            total.bookNo = curr.bookNo;
            total.units_sold = curr.units_sold;
            total.revenue = curr_price * curr.units_sold;
        }
        cout << "Pleas input another message of the same book "
             << "or a new book.\n" << endl;
    }
    cout << "The book " << total.bookNo << " was sold at "
         << total.units_sold << " copies " << " and the total"
         << " revenue is " << total.revenue << ".\n" << endl;
    return 0;
}
