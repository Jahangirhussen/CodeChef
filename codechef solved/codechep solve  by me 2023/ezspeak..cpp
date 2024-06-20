#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        string s;
        cin >> s;
        int cnt = 0;

        for(int i = 0; i <s.size(); i++)
        {

            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' )
            {
                cnt++;
            }
            else
                cnt = 0;

            if(cnt >= 4)
            {
                cout << "NO" << endl;
                return 0;
            }

        }

        cout << "YES" << endl;



    }


}
