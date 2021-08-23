#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Autobook.h"
#include "NonfictionTypeBook.h"
#include "FictionTypeBook.h"

using namespace std;
using example::Autobook;
using example::FictionTypeBook;
using example::NonfictionTypeBook;

void book_management_system(Autobook *book[20])
{
    int count = 0, choice, it;
    char titleBuy[20], authorBuy[20];
    while (true)
    {
        int input;
        cout << "\n\n Starting the System ..." << endl;
        cout << "Book Type: (Fiction/Non-Fiction): " << endl;
        cout << "\n1. Press 1 for Fiction"
             << "\n2. Press 2 for Non-Fiction" << endl;
        cin >> input;
        Autobook *book[20];
        if (input == 1)
            book[20] = new FictionTypeBook();
        else if (input == 2)
            book[20] = new NonfictionTypeBook();
        else
        {
            cerr << "Invalid choice entered..." << endl;
            exit(1);
        }
        cout << "\n\n Book Store Management System"
             << "\n-----------------------------"
             << "\n1. Entry of New Book"
             << "\n2. Buy Book"
             << "\n3. Search For Book"
             << "\n4. Edit Details Of Book"
             << "\n5. Exit"
             << "\n\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEntry of a new Book";
            book[count] = new Autobook;
            book[count]->feedData();
            count++;
            break;

        case 2:
            cout << "\nBuy a Book";
            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titleBuy, 20);
            cout << "Enter Author Of Book: ";
            cin.getline(authorBuy, 20);
            for (it = 0; it < count; it++)
            {
                if (book[it]->search(titleBuy, authorBuy))
                {
                    book[it]->buyBook();
                    break;
                }
            }
            if (it == count)
                cout << "\nThis Book is Not in Stock";

            break;

        case 3:
            cout << "Search for a Book";
            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titleBuy, 20);
            cout << "Enter Author Of Book: ";
            cin.getline(authorBuy, 20);

            for (it = 0; it < count; it++)
            {
                if (book[it]->search(titleBuy, authorBuy))
                {
                    cout << "\nBook Found Successfully";
                    book[it]->showData();
                    break;
                }
            }
            if (it == count)
                cout << "\nThis Book is Not in Stock";
            break;

        case 4:
            cout << "Edit details for a Book";
            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titleBuy, 20);
            cout << "Enter Author Of Book: ";
            cin.getline(authorBuy, 20);

            for (it = 0; it < count; it++)
            {
                if (book[it]->search(titleBuy, authorBuy))
                {
                    cout << "\nBook Found Successfully";
                    book[it]->editData();
                    break;
                }
            }
            if (it == count)
                cout << "\nThis Book is Not in Stock";
            break;

        case 5:
            cout << "Thanks for using the system..." << endl;
            exit(0);

        default:
            cout << "\nInvalid Choice Entered";
            break;
        }
    }
}
int main()
{
    Autobook *book[20];
    book_management_system(book);
    return 0;
}
