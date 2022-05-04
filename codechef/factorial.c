// #include <stdio.h>
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
    
//     scanf("%d", &n);

//     for (i = 1; i <= n; ++i){
//         fact *= i;
//     }
//     //missing line of  code  

//     return 0;
// }


#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
    
    scanf("%d", &n);

    
    if (n < 0)
        printf("Error!");
    else if(n<=20){
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%llu", fact);
    }
    else{
        printf("Overflow!");
    }

    return 0;
}