#include<iostream>
using namespace std;
int main()
{
    int rating;
    cin>>rating;

    switch (rating)
    {
    case 1:
        cout<<"Excellent";
        break;
    
    case 2:
        cout<<"Very good";
        break;
     case 3:
        cout<<"Good";
        break;    
    
    default:cout<<"Choose the correct statement";
        break;
    }
}