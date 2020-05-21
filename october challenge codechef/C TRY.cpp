#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
vector<int> G[1000];



int digSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int min_=100000;
int t=9999;
int bfs( int src)
{
	queue<int> Q;
	Q.push(src);
	int visited[1000] = {0}, level[1000];
	int parent[1000];
	visited[src] = 1;
   level[src] = 0;
	while(!Q.empty() )
	{
		int u = Q.front();
		//cout<<u<<" ->"<<endl;
		for(int i = 0; i < G[u].size(); i++)
		{
			int v = G[u][i];
			if(!visited[v] )
			{
				level[v] = level[u] + 1;

				if(v<min_)
                {
                    min_=v;
                    t=level[v];
                }
              else  if(v==min_)
                {
                    if(t>level[v])
                       {
                           t=level[v];
                       //    cout<<"done"<<endl;
                       }
                }
                //cout<<min_<<" = "<<t<<endl;
				parent[v] = u;
				visited[v] = 1;
				Q.push(v);
			}
		}
		Q.pop();
	}
return t;
}

int main ()
{
   int x, y, N , E, i;

   int t;
   cin >>t;
   for(i=1;i<=t;i++)
   {
       int n,d;
       cin>>n>>d;
       if(n==1)
       {cout<<"1 0"<<endl;
       continue;}
      int tempo=n;
       int temp=n;
       for(int j=1;j<=50;j++)
       {
           int dg=digSum(temp);
          // cout<<dg;
           tempo=temp;
          G[tempo].push_back(dg);
           if(dg>9)
           {
               int prvdg=dg;
               dg=digSum(dg);
               G[prvdg].push_back(dg);
               if(dg>9)
                {prvdg=dg;
               dg=digSum(dg);
               G[prvdg].push_back(dg);}
           }
           temp+=d;
      //  cout<<" "<<temp<<endl;
           G[tempo].push_back(temp);
       }
     int p=  bfs(n);

       cout<<min_<<" "<<p<<endl;

   }
}

