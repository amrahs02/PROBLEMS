#include <iostream>
using namespace std;

int main()
{
    int value=0;
    int SmallestNumber=0;
    int SmallestNumber2=0;

    cout << "Enter number to find the smallest and second smallest(or 0 to exit): ";
    cin >> value;
    while (value != 0) {
        if (value< SmallestNumber && value != 0 )
        {
            SmallestNumber = value;
        }
        else if (value<SmallestNumber && SmallestNumber2 >SmallestNumber && value != 0)
        {
            SmallestNumber2 = value;
        }
        cout << "Enter number to find the smallest and second smallest(or 0 to quit): ";
        cin >> value;
    }

    cout << "Smallest number is: " << SmallestNumber << '\n' << endl;
    cout << "Second Smallest number is: " << SmallestNumber2 << '\n' << endl;
    return 0;
}