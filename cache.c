# AMCAT

#include<stdio.h>
int main()
{
    int cachesize,pages[100],n,cache[100];
    int i,j,k,l,miss=0;
    scanf("%d%d",&cachesize,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&pages[i]);
    }
    for(i=0;i<cachesize;i++)
    {
        cache[i]=88;
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<cachesize;j++)
            {
            if(pages[i]==cache[j])
                {
                for(k=i;k<cachesize;k++)
                    {
                    cache[i]=cache[i+1];
                }
                cache[cachesize-1]=pages[i];
                break;
            }
            else if(j==cache[cachesize-1])
                {
                for(l=0;l<cachesize;l++)
                    {
                    cache[l]=cache[l+1];
                }
                cache[cachesize-1]=pages[i];
                miss++;
            }
        }
    }
    printf("%d",miss);
    return 0;
}
