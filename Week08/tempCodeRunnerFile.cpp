#include <iostream>
//Defining ROWS and COLUMN Constants.
#define ROWS 5
#define COLS 7

using namespace std;

int seats[ROWS][COLS];

void init() //Initializes matrix to initial values
{
    int i, j, k = 1;
    //Initializing the seats matrix with initial values
    for (i = 0; i < ROWS; i++) //Row counter
    {
        for (j = 0; j < COLS; j++) //Column Counter
        {
            seats[i][j] = k;
            k++;
        }
    }
}

void reserve() //Reserve a seat
{
    int i, j, seat_no, total, flag = 0;
    total = ROWS * COLS; //Calculating total number of seats. Therefore 0 to total is the range of valid seat no,

    cout << "\nEnter Seat No: "; //Accept Seat No.
    do
    {
        cin >> seat_no;
        if (seat_no < 0 || seat_no > total) //Checking whether the input seat no is valid
            cout << "\nInvalid Seat No. Enter again: ";
    } while (seat_no < 0 || seat_no > total);

    for (i = 0; i < ROWS; i++) //Searching for the seat_no in seats matrix
    {
        for (j = 0; j < COLS; j++)
        {
            if (seats[i][j] == seat_no) //If found set the seat no to 0. If not found implies seat is reserved
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
        cout << "Seat is taken.";
}

void display() //Display Seat map
{
    int i, j;
    char ch;
    do
    {
        cout << "\n\t\tSeat Map:\n\n";
        for (i = 0; i < ROWS; i++) //Row index
        {
            for (j = 0; j < COLS; j++) //Column Index
            {
                cout << seats[i][j] << "\t";
            }
            cout << "\n";
        }
        reserve();                                        //Function call
        cout << "\n\n\t\tDo you wish to continue(y/n): "; //Continue check?
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

int main() //Driver main
{
    init();
    display(); //Call main function
}
