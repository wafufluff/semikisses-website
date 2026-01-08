#include <stdio.h>

int main(){
int start, end;

while(1){
printf("Enter start number: ");
scanf("%d", &start);
printf("Enter end number: ");
scanf("%d", &end);

if(start == 0 && end == 0){
    printf("END OF PROGRAM");
    break;
}

if(start > end){
    printf("Start number is greater than end number. Please input again ...\n");
    printf("\n");
    continue;
}

printf("\n");
printf("Number\tSquare\tCube\n");
int num = start;

while(num <= end){
    int square = num * num;
    int cube = num * num * num; 
printf("%d\t%d\t%d\t\n", num, square, cube);

num++;
}
printf("\n");
}
return 0;
}
