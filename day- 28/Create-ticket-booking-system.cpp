#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    int ticketNo;
    string passengerName;
    string destination;
    bool booked;

public:
    void bookTicket()
    {
        cout << "Enter Ticket Number= ";
        cin >> ticketNo;
        cin.ignore();

        cout << "Enter Passenger Name= ";
        getline(cin, passengerName);

        cout << "Enter Destination= ";
        getline(cin, destination);

        booked = true;
        cout << "Ticket Booked Successfully!\n";
    }

    void cancelTicket()
    {
        if (booked)
        {
            booked = false;
            cout << "Ticket Cancelled Successfully!\n";
        }
        else
        {
            cout << "No Ticket Booked!\n";
        }
    }

    void displayTicket()
    {
        if (booked)
        {
            cout << "\nTicket Number = " << ticketNo;
            cout << "\nPassenger Name = " << passengerName;
            cout << "\nDestination = " << destination;
            cout << "\nStatus = Booked\n";
        }
        else
        {
            cout << "No Active Ticket.\n";
        }
    }
};

int main()
{
    Ticket t;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Cancel Ticket";
        cout << "\n3. Display Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice= ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.bookTicket();
            break;
        case 2:
            t.cancelTicket();
            break;
        case 3:
            t.displayTicket();
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}