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
        while(a>=30)
            a-=2;
        while(b>=30)
            b-=2;
        while(c>=30)
            c-=2;
            if((a+b*2+c*3)%2!=0)
            {
                cout<<"NO"<<endl;continue;
            }
        bool ok=false;
        for(int i=0;i<=a;i++)
        {
            for(int j=0;j<=b;j++)
            {
                for(int k=0;k<=c;k++)
                {
                    if(i+j*2+k*3==(a+b*2+c*3)/2)
                        ok=true;
                }
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;




    }
}
