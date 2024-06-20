#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,cons=0;
    string S;
    cin>>T;
    while(T--)
    {
        cin>>N;
          for(int i=0; i<N; i++)
        {
            cin>>S[i];

        }
        for(int i=0; i<N; i++)
        {

            if(  (S[i]>=97 && S[i]<=122)  && (S[i]!='a' || S[i]!='e' || S[i]!='i' ||S[i]!='o' || S[i]!='u') )
            {
                cons++;
                i++;

            }

            if( cons<4 && (S[i]>=97 && S[i]<=122)  && (S[i]=='a' || S[i]=='e' || S[i]=='i' ||S[i]=='o' || S[i]=='u') )
            {
                 cons==0;

            }


        }


        if(cons>=4)
        {
            cout<<"NO"<<endl;
            cons=0;
        }
        else
            {
                cout<<"YES\n";
                cons=0;
            }


    }
    return 0;
}
