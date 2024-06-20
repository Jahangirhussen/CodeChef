#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T;
    string S;
    cin>>T;
    while(T--)
    {

        int MAX=0;
        cin>>S;
        for(int i=0; i<S.size(); i++)
        {
            if(  (S[i]=='x' && S[i+1]=='y') || (S[i]=='y' && S[i+1]=='x')  )
            {


                MAX++;
                i++;
            }


        }
        cout<<MAX<<endl;
    }
}
