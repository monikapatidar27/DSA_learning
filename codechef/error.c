#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i=1,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }  
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}