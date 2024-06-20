
/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Chef
Problem Name   :DISCOOKIE
contest date:19/06/2024 __08:30 PM
Difficulty     :139 Div 4,Live
Problem Link   :https://www.codechef.com/problems/DISCOOKIE
STATUS         :Accepted
Problem Logic  :
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
    int x=m%n;

    if(x > (n/2) ) cout<<n-x<<endl<<endl;
    else if(n>m) cout<<n-m<<endl<<endl;
    else cout<<x<<endl<<endl;

    }

    return 0;
}
/*
4
5 17    2

5 18    2

4 1     3

2 18   0 */
