#include<iostream>
using namespace std;
int main()
{
    int amt;
    cin>>amt;
    if (amt>=5000)
    {
        if (amt>=10000)
        {
            cout<<"Trip to pondicherry";
        }
        else
        {
            cout<<"Local city tour";
        }
        
    }
    else if (amt>=2000)
    {
        cout<<"I''ll goto KFC"<<endl;
    }
    else
    {
        cout<<"I'll stay with my friends";
    }
    return 0;
    
}
