#include<iostream>
#include<math.h>
#include<ctime>
#include<string>
using namespace std;

int main ()
{
    int a,b,c;
    string moves[] = {"Rock", "Paper", "Scissor"};
    srand(time(0)); // randomness boost

first:
    cout << "Enter Rock(0), Paper(1), Scissor(2): ";
    cin >> a;
    b = rand() % 3;

    if(a == b)
    {
        cout << "DRAW!" << endl;
    }
    else if((a == 0 && b == 2) || (a == 1 && b == 0) || (a == 2 && b == 1))
    {
        cout << "YOU WIN!" << endl;
    }
    else if((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0))
    {
        cout << "YOU LOSE!" << endl;
    }
    else
    {
        cout << "Invalid input." << endl;
    }

    cout << "Computer chose: " << moves[b] << endl;

    cout << "Do you want to continue? (1 = Yes, 0 = No): ";
    cin >> c;
    if(c == 1)
        goto first;
    else
        cout << "Thank you for playing!" << endl;

    return 0;
}
