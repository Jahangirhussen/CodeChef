#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,K,N,A;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        for(int i=0; i<N; i++)
        {
            cin>>A;
            if(A<=K)
            {
                cout<<1;
                K=K-A;
            }
            else
                cout<<0;
        }
    }

    return 0;
}
