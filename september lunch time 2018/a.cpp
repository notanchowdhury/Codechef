
#include<iostream>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=1;i<=tcase;i++)
    {
        int n;
        int l,r;
        cin>>n;
        int cnt=0;
        while(n--)
        {
            cin>>l>>r;

          if(r-l>5)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
