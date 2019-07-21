#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,r;
        cin>>s>>r;
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                b++;
            if(s[i]=='0')
                a++;
            if(r[i]=='1')
                d++;
            if(r[i]=='0')
                c++;
        }
        if(a==c && b==d)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
