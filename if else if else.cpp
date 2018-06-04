#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    
    char op;
    
    cout  <<  " Enter your number = "  ;
    
    cin  >>  num1  >>  num2  ;
    
    cout  <<  " Enter your opreter = ";
    
    cin  >>  op;
    
    if(op == '+')
    
    {
    
         cout  << num1 << " + " <<num2 <<" = "<<num1+num2;
    
          }
    
          else if(op == '*')
    
          {
    
               cout  << num1 << " x " <<num2 <<" = "<<num1*num2;
    
               }
    
               else if(op == '/')
    
               {
    
                   cout  << num1 << " / " <<num2 <<" = "<<num1/num2;
    
                    }
    
                    else if(op == '-')
    
                    {
    
                         cout  << num1 << " - " <<num2 <<" = "<<num1-num2;
    
                         }
    
                         else
    
                         {
                             cout  <<  " Warning please entered the correct operator ";
    
                             }
    
                             cout<<endl;
    
              system("pause");
    
}
