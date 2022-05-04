#include <stdio.h>
int main()

{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if (n>m)
    {
        printf(">\n");
    }
    else if (n<m)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }

    // printf("This is an ""  \"error free\"  "" program");

    return 0;
}