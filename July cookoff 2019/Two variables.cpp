#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
       long long int x=1,y=1,p,tmp;
        while(y<n*n)
        {
            p=sqrt(y);
            tmp=(p+1)*(p+1);
            x++;
            y+=tmp;
        }
         printf("%lld\n",x);
    }
}
