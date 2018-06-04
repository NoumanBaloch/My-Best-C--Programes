#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row;
    for(row=1;row<=10;row++)
    {           
    for(col=1;col<=row;col++)
    {
    cout<<"$";
    }                       
    cout<<endl;
    }
    int i,j,rows; 
    for(i=10;i>=1;--i)
    {
    for(j=1;j<=i;++j)
    {
    cout <<"$";
    }
    cout << endl;
    }
    int ro,co;
    for(ro=1;ro<=10;ro++)
    {                 
    for(co=1;co<=ro;co++)
    {
    cout<<"$";
    }                       
    cout<<endl;
    }
    int m,n; 
    for(m=10;m>=1;--m)
    {
    for(n=1;n<=m;++n)
    {
    cout <<"$";
    }
    cout << endl;
    }  
    system("pause");
}                                                                           
