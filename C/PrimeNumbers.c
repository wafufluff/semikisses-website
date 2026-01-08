#include <stdio.h>

int main(){
int start, end;

while (1){
printf("Enter start number: ");
scanf("%d", &start);

printf("Enter end number: ");
scanf("%d", &end);

if (start == 0 && end == 0){
    printf("End of program\n\n");
    break;
}

if (start > end){
    printf("Start number is greater than end number. Please input again ...\n\n");
    continue;
}

printf("The prime numbers from %d - %d are ", start, end);

int num = start;
int comma = 1;

while (num <= end){
    int counter = 0;
    int divisor = 1;

    while (divisor <= num){
        if (num % divisor == 0){
            counter++;
        }
        divisor++;
    }
    if (counter == 2){
        if (!comma){
            printf(", ");
        } 
        printf("%d", num);
        comma = 0;
    }
    num++;
}
printf("\n\n");
}
return 0;
}