#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    char arr[100][100];
    int ans[100][100];
    while(t--)
    {
        int row,col;
        cin>>row>>col;
        for(int i=1; i<=row; i++)
            for(int j=1; j<=col; j++)
                cin>>arr[i][j];
                int sum=0;
        for(int i=1; i<=53; i++)
        {
            for(int j=1; j<=row; j++)
            {
                for(int k=1; k<=col; k++)
                {
                    ans[j][k]=0;
                }
            }

            for(int j=1; j<=row; j++)
            {

                for(int k=1; k<=col; k++)
                {
                    if(arr[j][k]=='-')
                        continue;

                    if(arr[j][k]=='R')
                    {

                        if(k+i>col || arr[j][k+i]=='#' )
                            arr[j][k]='-';
                        else
                        {
                            ans[j][k+i]++;
                        }
                    }

                    else if(arr[j][k]=='L')
                    {
                        if(k-i<1 || arr[j][k-i]=='#')
                            arr[j][k]='-';
                        else
                        {
                            ans[j][k-i]++;
                        }
                    }

                    else if(arr[j][k]=='U')
                    {
                        if(j-i<1 || arr[j-i][k]=='#')
                            arr[j][k]='-';
                        else
                        {
                            ans[j-i][k]++;
                        }
                    }
                    else if(arr[j][k]=='D')
                    {
                        if(j+i>row || arr[j+i][k]=='#')
                            arr[j][k]='-';
                        else
                        {
                            ans[j+i][k]++;
                        }
                    }
                }
            }
            for(int j=1; j<=row; j++)
            {
                for(int k=1; k<=col; k++)
                {
                    sum = sum +((ans[j][k]* (ans[j][k]-1))/2);
                }
            }
        }
        cout<<sum<<endl;

    }
}
