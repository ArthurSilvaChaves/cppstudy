#include <stdio.h>

int main(){
    for(int i = 2; i <= 10;i++){
        printf("tabuada do %d\n", i);
        for(int j = 2; j <=10;j++){
            printf("%d x %d = %d\n", i,j,j*i);
        }
    }

    return 0;
}