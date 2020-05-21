#include<bits/stdc++.h>
#define ll long long
#define Max=1e9;
#define Min=-1e9;
#define pb push_back
using namespace std;

int n,k,cnt;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b,c;
        cin>>a>>b>>c;
        if(a==0 && b!=0 && c!=0)
        {
            if((b%2 ==0)  && (c%2 == 0))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }
        ll tmp=min(a,b);
        c+=tmp;
        a-=tmp;b-=tmp;
        if(a==0)
        {
            if((b*2==c*3)
                cout<<"YES"<<endl;
            else   if(b%2==1 && c%2==1)
                 cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
     else   if(b==0)
        {
            if(a%2==0 && c%2==0)
                cout<<"YES"<<endl;
            else   if(a%2==1 && c%2==1)
                 cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }
}
