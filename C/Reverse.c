#include <stdio.h>

int main(){
int input;


while(1){
printf("Enter a 5-digit number: ");
scanf("%d", &input);

if (input == 0){
    printf("END OF PROGRAM\n");
    break;
}

printf("Number in reverse is ");

while(input > 0) {
    printf("%d", input % 10);
    input = input / 10;
}
printf("\n\n");
}
return 0;
}