#include <iostream>
using namespace std;
int main()
{
    cout<<"   ****Menu****  \n";
    cout<<" 1.Swap \n";
    cout<<" 2.Factorial \n";
    cout<<" 3.Grade of student \n";
    cout<<" 4.Table \n";
    cout<<" 5.pyramid\n";
    int ch;
    cout<<" Enter your choice = ";
    cin>>ch;
    if(ch==1)
    {
             int num1,num2,temp;
             cout<<" Enter your two number for swaping = ";
             cin>>num1>>num2;
             cout<<endl;
             cout<<" Before swaping  1st value is = "<<num1<<" and 2nd value is = "<<num2;
             temp = num1;
             num2 = num1;
             num1 = num2;
             cout<<" After swaping  1st value is = "<<num1<<" and 2nd value is = "<<num2;
             cout<<"\n \n";    
    }
    else if(ch==2)
    {
             int i,num,fact;
             cout<<" Enter your number to find factorial = ";
             cin>>num;
             for(i=1;i<=num;i++)
             {
             fact*=num;                
             }                          
             cout<<"\n";
             cout<<" Factorial of givin number is = " <<fact;
             cout<<endl;
    }     
    else if(ch==3)
    {
             int marks;
             cout<<" Enter your marks to find grade = ";
             cin>>marks;
             if(marks>=80)
             {
             cout<<"You get A grade \n";
             }
             else if(marks>=60)
             {
             cout<<"You get B grade \n";
             }
             else if(marks>=40)
             {
             cout<<"You get C grade \n"; 
             }
             else
             {
             cout<<" Fail ";    
             }    
             cout<<endl;
    }
    else if(ch==4)
    {
             int j,number;
             cout<<" Enter your number to display its table = ";
             cin>>number;
             for(j=1;j<=10;j++)
             {
             cout<<number<<" x "<<j<<" = "<<number*j;
             cout<<endl;
             }
             cout<<endl;
    }
    else if(ch==5)
    {  
             int i,space,rows,k=0;
             cout<<"Enter the rows";
             cin>>rows;
             for(i=1;i<=rows;i++)
             {
             for(space=1;space<=rows-i;++space)
             {
             cout<<" ";
             }
                                         
             while(k!=2*i-1)
             {
             cout<<"*";
             ++k;
             }
             k=0;
             cout<<endl;
             }
    }
    system("pause");
}
