#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ones[100005],zero[100005];int ind=0,sqr=2;

         long long int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                ind++;
            }
            ones[i]=ind;
          // cout<<ones[i];
        }
       // cout<<endl;
       for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                ans++;
            }
           else if(s[i]=='0' && s[i+1]=='1')
            {
                ans++;
            }
        }
       while(sqr*sqr+sqr<=s.size())
            {
                int range=sqr*sqr +sqr;
                int num=0;
                for(int j=0;j<s.size();j++)
                {
                    if(j+range>s.size())
                        break;
                    if(s[j]=='0')
                        num=0;
                    else
                        num=1;
                    num+=ones[j+range-1]-ones[j];
                    if(num*num==(range-num))
                        ans++;
            }
     sqr++;
    }
     printf("%lld\n",ans);
}
}

