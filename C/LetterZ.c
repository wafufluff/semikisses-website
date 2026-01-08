#include <stdio.h>

int main (){
int i, j;

for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
        if(i == 0 || i == 4){
            printf("*");
        } else if (i + j == 4){
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
/*
0,0 0,1 0,2 0,3 0,4
1,0 1,1 1,2 1,3 1,4
2,0 2,1 2,2 2,3 2,4
3,0 3,1 3,2 3,3 3,4
4,0 4,1 4,2 4,3 4,4
*/
return 0;
}