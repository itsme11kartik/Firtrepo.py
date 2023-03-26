#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("enter the length of the row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-i+1;j++){
            printf(" ");
        }
        for(l=1;l<=i*2-1;l++){
            printf("*");
        }printf("\n");
    }
    return 0;
}
