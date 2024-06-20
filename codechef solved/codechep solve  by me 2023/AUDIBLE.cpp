#include<iostream>
using namespace std;
int main()
{
    int T,X;
    cin>>T;
    while(T--)
    {
        cin>>X;
        if(X>=67 && X<=45000)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

