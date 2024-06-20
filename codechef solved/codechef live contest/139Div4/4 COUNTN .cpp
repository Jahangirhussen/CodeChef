/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Chef
Problem Name   :COUNTN
contest date:19/06/2024 __08:30 PM
Difficulty     :139 Div 4,Live
Problem Link   :https://www.codechef.com/problems/COUNTN
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
        int n,sum=0;

        cin>>n;

        for(int i=1; i<=n; i++)
        {

            if(n%i==0)
            {
                sum=sum+i;

            }
        }
        cout<<sum<<endl;

    }
    return 0;
}


