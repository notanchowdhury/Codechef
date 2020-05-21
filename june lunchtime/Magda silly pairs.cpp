#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        long long int x,y,k,o=0,m=0,rest;
        cin>>x;
           long long int ans=0;
        for(int i=1;i<=x;i++)
        {
            cin>>k;
            if(k%2==1)
                o++;
                ans+=k;
        }
         for(int i=1;i<=x;i++)
        {
            cin>>k;
            if(k%2==1)
                m++;
            ans+=k;
        }
        rest=abs(o-m);
        ans-=rest;

      //  cout<<ans<<endl;
       cout<<(ans/2)<<endl;
    }
}
