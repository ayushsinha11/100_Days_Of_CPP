#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    char op;
    cin>>op;

    switch (op)
    {
    case '+' :
        cout<<"sum= "<<a+b<<endl;
        break;
    case '-':
        cout<<"difference= "<<a-b<<endl;
        break;
     case '*':
        cout<<"multiply= "<<a*b<<endl;
        break;
         case '/':
        cout<<"divide= "<<a/b<<endl;
        break;    
    default:cout<<"choose the correct operator";
        break;
    }
return 0;
}