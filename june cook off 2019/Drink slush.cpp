#include<bits/stdc++.h>
using namespace std;
#define mx 100000
    long long  int c[mx],d[mx],f[mx],b[mx],ans[mx];

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int n,m,l;
        cin>>n>>m;
        for(int i=0; i<m; i++)
            cin>>c[i];

        for(int i=0; i<n; i++)
        {
            cin>>d[i]>>f[i]>>b[i];
            ans[i]=0;
        }
        long long cost=0;
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            if(c[d[i]-1]>0)
            {
                ans[i]=d[i];
                c[d[i]-1]--;
                cost+=f[i];
            }
            else
                q.push(i);
        }
        for(int i=0; i<m; i++)
        {
            if(q.empty())
                break;

            if(c[i]!=0)
            {
                for(int j=1; j<=c[i]; j++)
                {

                    if(!q.empty())
                    {
                        l=q.front();
                        q.pop();
                    }
                    cost+=b[l];
                    ans[l]=i+1;
                     if(q.empty())
                        break;
                }
            }
        }
        cout<<cost<<endl;
        for(int p=0;p<n;p++)
            cout<<ans[p]<<" ";
    }
}
