#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        LL a[n+2],pre[n+2];
        pre[0]=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            pre[i]=pre[i-1]+a[i];
        }
        if(n==1)
        {
            printf("%lld\n",a[1]);
            continue;
        }
        int temp=1;
        for(int i=1;i<=n;i++)
        {
            if(pre[n]-pre[i]==pre[i-1])
            {
                printf("%lld\n",a[i]);
                temp=0;
                break;
            }
        }
        if(temp==1)
            printf("NO EQUILIBRIUM\n");
    }
    return 0;
}
