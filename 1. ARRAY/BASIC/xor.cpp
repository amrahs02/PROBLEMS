#include<iostream>  
using namespace std;  
int main ()  
{  
    int a, b, c ;                     // Initializing integer variables to store data values  
    cout << "Enter values of a and b -> " << endl ;  
    cout << "a: " ;  
    cin >> a ;                       // taking a as input from user  
    cout << "b: " ;  
    cin >> b ;                         // taking b as input from user  
    c = a ^ b ;                      // storing XOR result of a and b in c  
    cout << "Applying XOR operation on a and b: "<< endl ;  
    cout << "a ^ b = " << c << endl ;           
}