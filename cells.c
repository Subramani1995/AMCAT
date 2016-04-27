# AMCAT

#include<stdio.h>
int main()
    {
    int a[10],b[10];
    a[0]=0;
    a[9]=0;
    int i,j,k;
    for(i=1;i<9;i++)
        {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    int n;
    scanf("%d",&n);
    while(n--)
        {
        for(i=1;i<=8;i++)
            {
            if(((a[i-1]==0)&&(a[i+1]==0))||((a[i-1]==1)&&(a[i+1]==1)))
                {
                b[i]=0;
            }
            else
                {
                b[i]=1;
            }
        }
        for(i=1;i<=8;i++)
            {
            a[i]=b[i];
        }
    }
    for(i=1;i<=8;i++)
        {
        printf("%d ",b[i]);
    }
}
