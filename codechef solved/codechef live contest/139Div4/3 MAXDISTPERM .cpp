/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Chef
Problem Name   :MAXDISTPERM
contest date:19/06/2024 __08:30 PM
Difficulty     :139 Div 4,Live
Problem Link   :https://www.codechef.com/problems/MAXDISTPERM
STATUS         :NOT Accepted
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
        int n;
        cin>>n;
        n=abs(n);
        if(n==1)cout<<1<<endl;
else {
        for (int i=1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for (int i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

