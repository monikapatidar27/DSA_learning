#include <stdio.h>
#include <string.h>
int main()

{
    char str[15];
    scanf("%s",str);
    int n = strlen(str);
    int m=15-n;
    printf("%s",str);
    char ch='*';
    if(n<15){
        int flag = 0;
        for(int i=0;i<m;i++){
            if(flag == 0){
                printf("*");
                flag=1;
            }
            else{
            
                printf("#");
                flag=0;
            }
        }
    }

    return 0;
}