#include<iostream>
using namespace std;
int main()
{
    int T,A,B;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        if(A<=B)
            cout<<A<<endl;
        else
            cout<<B<<endl;
    }
}

