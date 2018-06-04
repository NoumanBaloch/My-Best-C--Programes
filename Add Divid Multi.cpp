#include <iostream>
using namespace std;
int main()
{
    float num1,num2,num3,num4;
    
    float add,sub,multi,divid;
cout  <<  " Enter the numbers =  "  ;
    
cin   >>  num1  >>  num2  >>  num3  >>  num4  ;
    
add  =  num1  +  num2  +  num3  +  num4  ;
    
cout  << num1<<" + " <<num2 <<" + " <<num3 <<" + "<<num4 <<"  =  " <<  add;
    
cout  <<  endl  ;

sub  =  num1 - num2  -  num3  -  num4  ;

cout  << num1<<" - " <<num2 <<" - " <<num3 <<" - "<<num4 <<"  =  " <<  sub;

cout<<endl;
    
multi  =  num1  *  num2  *  num3  *  num4  ;
    
cout  << num1<<" x " <<num2 <<" x " <<num3 <<" x "<<num4 <<"  =  " <<  multi;
    
cout  <<  endl  ;
    
divid  =  num1  /  num2  /  num3  /  num4  ;
    
cout  << num1<<" / " <<num2 <<" / " <<num3 <<" / "<<num4 <<"  =  " <<  divid;
    
cout  <<  endl  ;

system  (  "pause"  )  ;
}
