#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        string s,u;
        cin>>n;
        cin>>s;
        cin>>u;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
       if(s[i]==u[i])
       {
           cnt++;
       }
       else if(u[i]!='N')
        i++;
        }
       cout<<cnt<<endl;
    }
}
