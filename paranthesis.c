# AMCAT


#include<stdio.h>
//paranthesis balancing
int main()
{
    char bracket[100];
    int i,j,count=0,len=0;
    scanf("%s",bracket);
    for(i=0;bracket[i]!=0;i++)
        {
        len++;
    }
    for(i=0;i<len;i++)
        {
        if(bracket[i]!='*')
            {
        if(bracket[i]==')')
            {
            for(j=i;j>=0;j--)
                {
                if(bracket[j]=='(')
                    {
                    bracket[i]='*';
                    bracket[j]='*';
                    count++;
                    break;
                        
                }
            }
        }
    }
}
    printf("%s\n",bracket);
    printf("%d",count);
    return 0;
}
