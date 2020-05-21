#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
    int t;
    long long int ar[100002];
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%lld",&ar[i]);
         sort(ar, ar+n, greater<int>());
         long long int ans=0;
        for(int i=0;i<n;i++)
        {

            if(ar[i]-i>0)
            ans=((ans%mod)+(ar[i]-i)%mod)%mod;
        }
        printf("%lld\n",ans);
    }
}
