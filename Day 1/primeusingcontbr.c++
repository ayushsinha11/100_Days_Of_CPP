#include<iostream>
using namespace std;
int main()
{   
    int i;
    int n;
    cin>>n;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not a prime"<<endl;
             break;
        }
    }
    if (i==n)
    {
        cout<<"prime"<<endl;
    }
    return 0;
}