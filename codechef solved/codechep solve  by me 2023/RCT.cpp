#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,W,L;
    cin>>T;
    while(T--)
    {
        cin >>W>>L;
        if( ( L*L +  (1*1) )%4!=0 && ((L*L )+ ((W- 1)*(W-1)))%4!=0  )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
