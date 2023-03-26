#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,l,n;
    printf("enter the length of the row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            k=i*(i+1);
            printf("%d",i*j);
        }printf("\n");
    }
    return 0;
}
