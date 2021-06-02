// Write a C++ program with the following specifications:
// 1.	Use two-dimensional array with size 7 columns and 5 rows.
// 2.	Seat numbers are populated during run-time.
// 3.	User is asked to input a seat number.
// 4.	Seat number chosen is replaced by 0.
// 5.	Program displays a remark “Seat successfully reserved” when reservation is done.
// 6.	User is not allowed to reserve a previously reserved seat.  Display “Seat is taken” remarks.
// 7.	User is not allowed to enter an invalid seat number.  Display an error message.
// 8.	Program continuously loops.
#include <iostream>
#define ROWS 5
#define COLS 7

using namespace std;

int seats[ROWS][COLS];

// this is the beginning to initatie the values and variables
void init()
{
    int i, j, k = 1;           // The seat values and matrix
    for (i = 0; i < ROWS; i++) // THIS IS FOR ROW MATRIX
    {
        for (j = 0; j < COLS; j++) // THIS is for Column matrix
        {
            seats[i][j] = k;
            k++;
        }
    }
}

void reserve() //for the reserve a seats
{

    int i, j, seat_no, total, flag = 0;
    total = ROWS * COLS; // The total range of seats. And valid seat no.

    cout << "\n Enter Seat Number: "; // Input seat no.
    do                                // looping for seat number whether its taken or not. Valid or invalid input
    {
        cin >> seat_no;
        if (seat_no < 0 || seat_no > total) // checking if seat no input is invalid or valid
            cout << "\n Invalid Seat No. Please Enter Again";
    } while (seat_no < 0 || seat_no > total);

    for (i = 0; j < ROWS; i++) // Looking for the seat numbers in seat matrix ROWS
    {
        for (j = 0; j < COLS; j++)
        {
            if (seats[i][j] == seat_no) // if ever found set no to O. This will look or implies if seat is reserved
            {
                seats[i][j] = 0;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "Seat successfully reserved!";
    else
        cout << "Seat is taken";
}

void display() //Display the seat map
{
    int i, j;
    char ch;
    do
    {
        cout << "\n\t\t Seat Map:\n\n";
        for (i = 0; i < ROWS; i++) //ROWS MATRIX ROWS
        {
            for (j = 0; j < COLS; j++) //Column
            {
                cout << seats[i][j] << " \t";
            }
            cout << "\n";
        }
        reserve();
        cout << "\n\n\t\t Do you wish to continue (y/n): "; // Continue check
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

int main()
{
    init();
    display(); // call the functions(VOID)
}