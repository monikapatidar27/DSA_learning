#include<stdio.h>
int main()

{

int num,fact=1,temp=1;

scanf("%d",&num);

while(temp<=num)

{

    fact=fact*temp;
    temp++;

}

printf("%d",fact);

return 0;
}