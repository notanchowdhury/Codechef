#include<bits/stdc++.h>
using namespace std;
int t,ans=0,ar[503][5004],allk[5004];
 vector<int>v[12];

    queue<int>q;
int main()
{

  scanf("%d",&t);

  while(t--)
  {
      int n,m,k;
      scanf("%d %d %d",&n,&m,&k);
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=k;j++)
            scanf("%d",&ar[i][j]);
      }
      memset(allk,0,sizeof(allk));
      ans=0;
      for(int i=1;i<=n;i++)
      {
         bool flg=false;
          for(int j=1;j<=k;j++)
            {
                if(ans==allk[j])
                {
                    flg=true;
                    break;
                }
            }
            if(!flg)
                ans++;
             for(int j=1;j<=k;j++)
            {
                if(ans==allk[j])
                {
                    v[ar[i][j]].push_back(j);
                }
            }
            int mx=0,keep=0;
            for(int j=1;j<=m;j++)
            {
                if(v[j].size()>mx)
                {
                    keep=j;
                    mx=v[j].size();
                }

            }
            q.push(keep);
            for(int p=0;p<v[keep].size();p++)
            {
                allk[v[keep][p]]++;
            }
            for(int j=1;j<=m;j++)
                v[j].clear();
      }
      while(!q.empty())
      {
          cout<<q.front()<<" ";
          q.pop();
      }
  }
}
