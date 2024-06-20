#include <iostream>
using namespace std;

int main()
{
    int H,M,T;
    cin>>T;
    while(T--){

    cin>>M>>H;
    if( (M/(H*H))<=18 )
        cout<<1<<endl;

    if( (M/(H*H))>=19 && (M/(H*H))<=24 )
        cout<<"2"<<endl;

    if( (M/(H*H))>=25 && (M/(H*H))<=29 )
        cout<<"3"<<endl;

    if( (M/(H*H))>=30 )
        cout<<4<<endl;
    }
    return 0;
}
