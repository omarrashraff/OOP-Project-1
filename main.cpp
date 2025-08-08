#include <iostream>
#include "passenger.h"
#include "flight.h"
using namespace std;

int main()
{
    cout << "Welcome! Please enter your info."<< endl;         // Program's opening message

    char choice;                                               // Variable to store the user's choice

    // Creates a flight object 'fL1' initialized with default values (0, " ",0)

    flight fL1(0, " ",0);
     passenger pas1(" ",0);       // Creates a temporary 'passenger' object with default values (" ", 0)

    //Add passengers dynamically
    do
    {

         cin >> pas1;                  // To take input for the passenger's details
         fL1 += pas1;                  // Uses the overloaded operator += to add the passenger to the flight 'fL1'
         cout << "Do you want to add more passengers?(Y/N)";     // Prompt the user to decide whether to add more passengers.
         cin >> choice;                         // Takes the user's choice
         cin.ignore();                            // clear the input buffer to prevent issues with subsequent input
    }

    while (choice == 'Y' || choice == 'y');         // Repeats the loop as long as the user inputs 'Y' or 'y'


    flight flights[3]= {                                 // An array with the flights and their data.
                        flight(205, "Paris", 100),
                        flight(215, "Switzerland", 120),
                        flight(250, "Italy", 135)
                      };

    cout << "Available flights: ";               // Outputs a header message for the list of available flights
    for ( int i=0; i<3; i++)                     // Loops through each flight
    {
        cout << i+1 <<". Flight number: "<< flights[i].getflightnumber() << " to " << flights[i].getdestination();   // Outputs the flight number and destination for each flight
    }

    cout << "Displaying passengers' details: "<< endl;
    pas1.display();
    // Display flight details
    cout << fL1;

    // Copy constructor: creates a new flight which is fL2 which is a copy of fl1
    flight fL2(fL1);

   // Outputs the details of fL2
    cout << "Details of Flight 2: ";
    cout << fL2;


    // Increments the flight object fL1
    ++fL1;
    // Outputs the updated details of flight fL1 after the incrementing
    cout<<fL1;
     // Decrements the flight object fL1
    fL1--;
    // Outputs the updated details of flight fL1 after the decrementing
    cout << fL1;
     // Th operator -= is used to decrease some property of fL1
    fL1-=1;
    // Outputs the updated details of flight fL1 after the -= operation
    cout<<fL1;

    // Outputs the current total number of passengers
    cout << "Current passenger count: " << passenger::gettotalpassengers() << endl;



        fL1.displayflightdetails();

    //Search for a seat
    do {
        int seat,row;
        cout << "Enter the seat you want to search for: ";
        cin >> seat;                                       // user inputs seat number
        cout << "Enter the row you want to search for: ";
        cin >> row;                                          // user inputs row number

        fL1.searchforseatnumer(seat,row);

        // Ask if the user wants to search again
        cout << "Do you want to search for another seat? (Y/N): ";
        cin >> choice;                                          // user inputs choice

    } while (choice == 'Y' || choice == 'y');

   // The operator += is used to add a passenger
    passenger pas2;
   do
   {

    cout << "Do you want to add a passenger?";
    cin >> choice;
    fL1+=pas2;


    } while (choice == 'Y' || choice == 'y');

    // Asks the user if they want to add another passenger
     do
   {

    cout << "Do you want to add another passenger?";
    cin >> choice;
    fL1+=pas2;


    } while (choice == 'Y' || choice == 'y');

   // The operator -- is used to remove a passenger
   do
   {

    cout << "Do you want to remove a passenger?";
    cin >> choice;
    fL1+=pas2;


    } while (choice == 'Y' || choice == 'y');

    // Asks the user if they want to remove another passenger
       do
   {

    cout << "Do you want to remove another passenger?";
    cin >> choice;
    fL1+=pas2;


    } while (choice == 'Y' || choice == 'y');


   // Outputs the current total number of passengers
    cout << "Current passenger count: " << passenger::gettotalpassengers() << endl;

    // Displays flight info
    cout << fL1;
    fL1.displayflightdetails();

   return 0;
}

