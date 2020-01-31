#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,k,i,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+arr[0];
        }
        if(k>=sum)
        {
            printf("YES\n");
        }
        else if(k<sum)
        {
            printf("NO\n");
        }
    }
    return 0;
}
