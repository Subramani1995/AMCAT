# AMCAT

#include <stdio.h>
 

 void path(int,int);
int maze[10][10], test[10][10], countpath = 0, n,row,col;
 
void path(int i, int j){
 
    if(i == row && j == col)
        {
        countpath++;
        
    }
    
    test[i][j] = 0;
    if((j + 1) <= n && test[i][j + 1] == 1 && maze[i][j + 1] == 1)
        path(i, j + 1);
    if((i + 1) <= n && test[i + 1][j] == 1 && maze[i + 1][j] == 1)
        path(i + 1, j);
    if((j - 1) >= 1 && test[i][j - 1] == 1 && maze[i][j - 1] == 1)
        path(i, j - 1);
    if((i - 1) >= 1 && test[i - 1][j] == 1 && maze[i - 1][j] == 1)
        path(i - 1, j);
    test[i][j] = 1;
    return;
}
 
 
int main(){
    int i, j;
 
    scanf("%d", &n);
    scanf("%d %d",&row,&col);
    for(i = 1;i <= n;i++){
        for(j = 1;j <= n;j++){
            scanf("%d", &maze[i][j]);
            test[i][j] = 0;
        }
    }
    path(1, 1);
    if(countpath>0)
        {
    printf("yes");
    }
    else
        {
        printf("no");
    }
    return(0);
}
