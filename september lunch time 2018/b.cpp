#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    vector<pair<int,int> >vec;
    int arr[100006];
    for(int i=1;i<=tcase;i++)
    {
        int n,m;
        cin>>n>>m;
        for(int j=1;j<=n;j++)
        {
        int a,b;
        cin>>a>>b;


        vec.push_back(make_pair(a,b));
        }
        for(int j=1;j<=m;j++)
        {
        int a;
        cin>>a;
        arr[j]=a;
        }
        sort(vec.begin(),vec.end());
         for(int j=1;j<=m;j++)
        {
           int low=0,high=n-1;
           int temp=arr[j];
         //  bool flag =false;
           if(temp>=vec[n-1].second)
           {
               cout<<"-1"<<endl;
               continue;
           }
           if(temp<vec[0].first)
           {
               cout<<(vec[0].first-temp)<<endl;
               continue;
           }
           while(low<=high)
           {
               int mid=(low+high)/2;
               if(vec[mid].first<=temp && vec[mid].second>temp)
               {
                   cout<<"0"<<endl;
                   //flag=true;
                   break;
               }
               if(vec[mid].first<temp && vec[mid+1].first>temp)
               {
                   cout<<((vec[mid+1].first)-temp)<<endl;
                   break;
               }
               if(vec[mid].first>temp)
                high=mid-1;
               else if(vec[mid].first<temp)
                low=mid+1;
           }
        }
        vec.clear();
    }
    return 0;
}
