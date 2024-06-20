#include<iostream>
using namespace std;
int main()
{
    int T,B1,B2,B3;
    cin>>T;
    while(T--)
    {
        cin>>B1>>B2>>B3;
      if( (B1==0 && B2==0) || (B1==0 && B3==0) || (B2==0 && B3==0))
      cout<<"Water filling time"<<endl;
      else
        cout<<"Not now"<<endl;

}
}
