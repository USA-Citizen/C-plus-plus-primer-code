#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data init_book, later_book;

    cout << "Please enter one ISBN:\n" << endl;
    cin >> init_book.bookNo;

    cout << "Please enter the same ISBN:\n" << endl;
    while ( cin >> later_book.bookNo )
    {
        unsigned int price = 0;

        if ( init_book.bookNo != later_book.bookNo )
        {
            cerr << "Unmatched book No.!\n"
                 << "Try it again!!!\n" << endl;
            continue;
        }

        cout << "Your ISBN is the same.\n"
             << "Please enter firstly the units sold "
             << "secondly the price of it.\n" << endl;
        cin >> later_book.units_sold;
        cin >> price;
        init_book.units_sold += later_book.units_sold;
        init_book.revenue += later_book.units_sold * price;


        cout << "Up to now, the book " << init_book.bookNo << " has sold "
             << init_book.units_sold << " copies.\n"
             << "And the total revenue is " << init_book.revenue
             << ".\n" << endl;
        cout << "If you would like to add more selling logs, "
             << "please continue to enter the same ISBN!!\n" << endl;
    }
    return 0;


}
