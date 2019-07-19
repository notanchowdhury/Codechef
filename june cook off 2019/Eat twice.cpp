#include<bits/stdc++.h>
using namespace std;


 long long int arr[100002];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  long long  int t,n,m,d,v;
    cin>>t;
    while(t--)

    {
        long long int cnt=0;
        cin>>n>>m;
        for(int i=0;i<100000;i++)
        {
            arr[i]=0;
        }
        set<int>st;
       // one=0,two=0;
        for(int i=1;i<=n;i++)
        {
            cin>>d>>v;

            if(arr[d-1]<v)
                arr[d-1]=v;

        }

       sort(arr,arr+100000);
       cnt=arr[100000-1]+arr[100000-2];

      // cout<<arr[100000-1]<<" "<<arr[100000-2]<<" "<<arr[100000-3]<<endl;
       cout<<cnt<<endl;
    }
}

