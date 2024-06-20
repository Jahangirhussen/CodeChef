#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,A,B,C;
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>C;



        int m= min(A,B );
      m=  min(m,C );

              cout<<A+B+C-m<<endl;
    }
    return 0;
}

