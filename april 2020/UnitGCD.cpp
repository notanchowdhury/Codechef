#include<bits/stdc++.h>


int main()
{
  int t;
  scanf("%d",&t);
    while(t--){

       int n;
       scanf("%d",&n);
       bool flg=false;
       if(n==1)
       {
           printf("1\n1 1\n");
           continue;
       }
       printf("%d\n",n/2);
       if(n%2==1)
       {
           flg=true;
           n-=2;
       }
       int i;

       for(i=1;i+1<=n; )
       {
           printf("2 %d %d\n",i,i+1);
           i+=2;
       }
       if(flg)
       {
           printf("3 %d %d %d\n",n,n+1,n+2);
       }
    }
    return 0;
}

