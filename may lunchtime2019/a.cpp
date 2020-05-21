

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS
    int t;
    cin>>t;
    int m,n,ans=0;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        ans=0;
        string s;
        cin>>s;
        for(int j=0;j<n-1;j++)
        {
            if(s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u')
            {
                if(s[j]!='a'&& s[j]!='e'&& s[j]!='i' && s[j]!='o' && s[j] !='u')
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
}
