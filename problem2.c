//method: continue fibonnaci numbers of adding the two previous until the value hits 4 million
//next term is sum of previous two terms.
// each number generated check if the number is even, then add to an even sums.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    //initialize with the first even term
    int even_sum = 2;
    //indicate the original two terms is 1 and 2
    int prev_two[] = {1, 2};
    int fib_term;
    while (fib_term < 4000000) {
        fib_term = prev_two[0] + prev_two[1];
        if (fib_term % 2 == 0){
            even_sum = even_sum + fib_term;
        }
        prev_two[0] = prev_two[1];
        prev_two[1] = fib_term;

    }
    printf("%d",even_sum);
}