#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Autobook.h"

using namespace std;

namespace example
{
    Autobook::Autobook()
    {
        author = new char[20];
        title = new char[20];
        publisher = new char[20];
        price = new float;
        stock = new int;
    }
    void Autobook::feedData()
    {
        cin.ignore();
        cout << "\nEnter Author Name: ";
        cin.getline(author, 20);
        cout << "Enter Title Name: ";
        cin.getline(title, 20);
        cout << "Enter Publisher Name: ";
        cin.getline(publisher, 20);
        cout << "Enter Price: ";
        cin >> *price;
        cout << "Enter Stock: ";
        cin >> *stock;
    }

    void Autobook::editData()
    {

        cout << "\nEnter Author Name: ";
        cin.getline(author, 20);
        cout << "Enter Title Name: ";
        cin.getline(title, 20);
        cout << "Enter Publisher Name: ";
        cin.getline(publisher, 20);
        cout << "Enter Price: ";
        cin >> *price;
        cout << "Enter Stock: ";
        cin >> *stock;
    }

    void Autobook::showData()
    {
        cout << "\nAuthor Name: " << author;
        cout << "\nTitle Name: " << title;
        cout << "\nPublisher Name: " << publisher;
        cout << "\nPrice: " << *price;
        cout << "\nStock: " << *stock;
    }
    int Autobook::search(char tbuy[20], char abuy[20])
    {
        if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
            return 1;
        else
            return 0;
    }

    void Autobook::buyBook()
    {
        int count;
        cout << "\nEnter Number Of Books to buy: ";
        cin >> count;
        if (count <= *stock)
        {
            *stock = *stock - count;
            cout << "\nBooks Bought Successfully";
            cout << "\nAmount: Rs. " << (*price) * count;
        }
        else
            cout << "\nRequired Copies not in Stock";
    }

}
