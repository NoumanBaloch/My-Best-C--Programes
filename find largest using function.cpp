#include <iostream> 
using namespace std ; 
int max ( int num1 , int num2 );// function declaration 
int main () 
{

        int a = 100 ; int b = 200 ; // local variable declaration: 
            
           int ret ;  

ret = max ( a , b );// calling a function to get max value.

 cout << "Max value is : " << ret << endl ;

 system("pause");

 }
  
int max ( int num1 , int num2 ) // function returning the max between two numbers
{ 
    int result;// local variable declaration int result ;
 
          if ( num1 > num2 ) result = num1 ; 
            else result = num2 ; 
               return result ;
           }
