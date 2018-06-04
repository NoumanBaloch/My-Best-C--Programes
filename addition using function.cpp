#include <iostream>
using namespace std;
int sum(int a, int b);//declare the function
int main()
{
    int a = 0, b = 0; 
    cout << "Enter a number "; 
    cin >> a; 
    cout << "Enter another number "; 
    cin >> b; 
    int c = sum(a, b); //call the sum function
    cout << "sum = " << c << endl; 
    system("pause"); 
    }
    int sum(int a, int b)
    {
        return a + b; 
        } 
