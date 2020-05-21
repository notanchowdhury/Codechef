#include<bits/stdc++.h>
#define ll long long
#define Max=1e9;
#define Min=-1e9;
#define pb push_back
using namespace std;

int n,k;

int main()
{

    int ar[11];
    ar[0]=6;
    ar[1]=2;
    ar[2]=5;
    ar[3]=5;

    ar[4]=4;
    ar[5]=5;
    ar[6]=6;
    ar[7]=3;
    ar[8]=7;
    ar[9]=6;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans=(n+k);
       int  cnt=0;
        while(ans)
        {
            int tmp=ans%10;
            cnt+=ar[tmp];
            ans/=10;
            //cout<<ans<<endl;
        }
        cout<<cnt<<"\n";
    //cout<<"DE"<<endl;
    }

}
