#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase,ar[100004];
    scanf("%d",&tcase);
    long long int ans,tmp;
    vector<long long int>v,v4,v2;
    vector<pair<long long, long long > >v8;
    for(int t=1; t<=tcase; t++)
    {
        int n;
        scanf("%d",&n);
        ans=0;
        tmp=0;
        long long int one=0,two=1;
        long long shala=0,hishab=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
            if(ar[i]<0)
                ar[i]=ar[i]*(-1);
            if(ar[i]%4==0)
            {
                if(one>=2)
                {
                  ///  cout<<"shala "<<shala<<" i "<<i<<endl;
                    v8.push_back({shala,i});
                }
                shala=i;
                if(tmp!=0)
                    v.push_back(tmp);

                tmp=0;
                one=0;
                v4.push_back(i);
            }
            else if(ar[i]%2==1)
            {
                tmp++;
                ans++;
               /// cout<<"odd = "<<1<<endl;
            }
            else
            {
                one++;
                if(tmp!=0)
                    v.push_back(tmp);
                tmp=0;
            }
            /*
            12
            1 3 5 4 2 1 3 6 4 3 4 5
            15
            4 4 4 2 1 2 4 2 4 4 2 1 2 1 3
            */
        }
        if(tmp!=0)
        {
            v.push_back(tmp);
            //ans+=tmp;
        }
        if(one>=2)
        {
            v8.push_back({shala,n+1});
          ///  cout<<"shala "<<shala<<" i "<<n+1<<endl;
        }

        for(int i=0; i<v.size(); i++)
        {
            ///cout<<"->-> "<<((v[i]*(v[i]-1))/2LL)<<endl;
            ans+=((v[i]*(v[i]-1))/2LL);
        }

        ///evens
        for(int i=0; i<v8.size(); i++)
        {
            long long  int lft=0,str=v8[i].first,cnt=0;
            bool flg=false;
            for(int j=v8[i].first+1; j<v8[i].second; j++)
            {
                if(ar[j]%2==0)
                {
                    cnt++;
                    if(cnt==1 && !flg)
                    {
                        lft=j;
                    }
                }

                if(cnt==2)
                {
                    flg=true;
                    long long apatoto=(lft-str)*(v8[i].second-j);
                    ans+=apatoto;
                  ///  cout<<lft<<" "<<str<<" ->>"<<apatoto<<endl;
                    cnt=1;
                    str=lft;
                    lft=j;

                }
            }
        }
        long long keep;
        if(v4.size()>=1)
        {
          ///  cout<<"-> "<<(v4[0]*(n-v4[0]+1))<<endl;
            ans+=(v4[0]*(n-v4[0]+1));
            keep=v4[0];
        }
        for(int i=1; i<v4.size(); i++)
        {
            ///cout<<"-> "<<((v4[i]-keep)*(n-v4[i]+1))<<endl;
            ans+=((v4[i]-keep)*(n-v4[i]+1));
            keep=v4[i];
        }
        printf("%lld\n",ans);
        v.clear();
        v2.clear();
        v4.clear();
        v8.clear();
    }
    return 0;
}

