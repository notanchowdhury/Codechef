#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        int res;
        if(n==0)
        {
            cout<<"1 0 0"<<endl;
            continue;
        }
        res=n/26;
    unsigned  long long  int bit=1;
        for(int i=1;i<=res;i++)
            bit=bit*2;
        int temp=n%26;
        if(temp==0)
        {
            bit=bit/2;
            cout<<"0 0 "<<bit<<endl;

        }
        else if(temp>=0 && temp<=2)
            cout<<bit<<" 0 0"<<endl;
        else if(temp>2 &&temp<=10)
            cout<<"0 "<<bit<<" 0"<<endl;
        else
            cout<<"0 0 "<<bit<<endl;
    }
    return 0;
}
