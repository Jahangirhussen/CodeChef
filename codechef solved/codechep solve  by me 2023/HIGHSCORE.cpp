#include<iostream>
using namespace std;
int main()
{
    int T,N,A,B,C,D,MAX;
    cin>>T;
    while(T--)
    {
        cin>>N;
        cin>>A>>B>>C>>D;
        if(N== A+B+C+D)
        {
             MAX=max(A,B);
            MAX=max(MAX,C);
            MAX=max(MAX,D);

        }
        cout<<MAX<<endl;
    }
    return 0;
}
