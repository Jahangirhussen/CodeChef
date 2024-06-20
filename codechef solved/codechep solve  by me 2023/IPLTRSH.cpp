#include<iostream>
using namespace std;
int main()
{
    int T,N,M;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        if(M>=N)
            cout<<0;
        else
            cout<<N-M<<endl;
    }
}

