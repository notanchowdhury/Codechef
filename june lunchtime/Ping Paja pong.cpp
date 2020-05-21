#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int ans=(x+y)/k;
      //  cout<<ans<<endl;
        if(ans%2==0)
            cout<<"Chef"<<endl;
        else
            cout<<"Paja"<<endl;
    }
}
