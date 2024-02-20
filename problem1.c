#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int input;
    int sum = 0;
    scanf("%d", &input);

    for (int i=0; i < input; i++){
        if (i % 5 == 0 || i % 3 == 0) {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}