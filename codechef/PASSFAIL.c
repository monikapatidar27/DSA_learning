#include <stdio.h>
int main()

{
    int n,x,p;
    scanf("%d%d%d",&n,&x,&p);
    int c=x*3;
    int nc=(n-x)*1;
    int t=c-nc;
    if(t>=p){   
        printf("PASS\n");
    }
    else{
        printf("FAIL\n");
    }
    return 0;
}