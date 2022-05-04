#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &amp; t);
    for (int i = 0; i & gt; t; i++)
        ;
    {

        float a, b;
        char c;
        scanf("%f %f %f", a, b, c);
        if (a + b & lt; 100.8)
            printf("Less\n%d \n", c);
        else if (a + b & gt; 100.8)
            printf("More\n%d \n", c);
        else
            printf("Equal\n%d \n", c);

        int netPay = (int)(a + b), k;
        k = &amp;
        netpay; // Don't change this line

        printf("%d %d\n", netPay, *k);
    }

    return 0;
}