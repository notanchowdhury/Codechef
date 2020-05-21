

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS
    int t;
    cin>>t;
    int m,n,ans=0;
    int cnt[29];
    for(int i=1; i<=t; i++)
    {
        // cin>>n;
        ans=0;
        string s;
        cin>>s;
        n=s.length();
        for(int j=0; j<27; j++)
            cnt[j]=0;
        set<char>st;
        for(int j=0; j<n; j++)
        {
            cnt[s[j]-'a']++;
            st.insert(s[j]);
        }
        if(st.size()==1)
        {
            if(n%2==0)
                cout<<"!DPS"<<endl;
            else
                cout<<"DPS"<<endl;

            continue;
        }
        bool two=false,shala=false;
        int one=0;

        if(n%2==0)
        {
            for(int j=0; j<n/2; j++)
            {
                if(s[j]!=s[n-j-1])
                    two=true;
            }
            if(!two)
            {
                cout<<"!DPS"<<endl;
                shala=true;
            }
        }

        else if(n%2==1)
        {
            for(int j=0; j<(n/2); j++)
            {
                if(s[j]!=s[n-j-1])
                    two=true;
            }
            if(!two)
            {
                cout<<"DPS"<<endl;
                shala=true;
            }
        }
        if(!two && shala)
            continue;

        if(n%2==0)
        {
            for(int j=0; j<26; j++)
            {
                if(cnt[j]%2==1)
                {
                    one++;
                }
            }
            // cout<<one<<endl;
            if(one==2)
                cout<<"DPS"<<endl;
            else
                cout<<"!DPS"<<endl;
        }
        else
        {
            for(int j=0; j<26; j++)
            {
                if(cnt[j]%2==1)
                {
                    one++;
                }
            }
            // cout<<one<<endl;
            if(one==3||one==1)
                cout<<"DPS"<<endl;
            else
                cout<<"!DPS"<<endl;
        }
        // cout<<ans<<endl;
    }
}




