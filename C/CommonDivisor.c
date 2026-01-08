#include <stdio.h>

int main(){https://chatgpt.com/c/695e41e9-4cd4-832e-8fc8-6ad816f5f16a
int start, end;

while(1){
printf("Enter the first integer: ");
scanf("%d", &start);

printf("Enter the second integer: ");
scanf("%d", &end);

if(end == 0){
    printf("END OF PROGRAM\n");
    break;
}

int divisor;
if(start < end){
    divisor = start;
} else {
    divisor = end;
}

while(divisor >= 1){
    if(start % divisor == 0 && end % divisor == 0){
        printf("The Greatest Common Divisor of %d and %d is %d", start, end, divisor);
        break;
        }
    divisor--;
    }
printf("\n\n");
}
return 0;
}