#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase,ar[110];
    scanf("%d",&tcase);
    while(tcase--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&ar[i]);
        bool flg=true;
         for(int i=0;i<n;i++)
         {
             if(ar[i]==1)
             {
                 if(i+1<=n && ar[i+1]==1)
                 {
                     flg=false;
                 }
                 if(i+2<=n && ar[i+2]==1)
                 {
                     flg=false;
                 }
                 if(i+3<=n && ar[i+3]==1)
                 {
                     flg=false;
                 }
                 if(i+4<=n && ar[i+4]==1)
                 {
                     flg=false;
                 }
                 if(i+5<=n && ar[i+5]==1)
                 {
                     flg=false;
                 }
             }
         }
         if(flg)
            printf("YES\n");
         else
            printf("NO\n");
    }
}
