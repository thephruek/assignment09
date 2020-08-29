#include<stdio.h>
int main() {
    int sum = 0, i, x = 0;  
    for (x = 1; x <= 10000; x++) {
        for (i = 1; i < x;) {
            if (x % i == 0) {
                sum += i;

            }
            i++;
        }
        if (sum == x) {
            printf("%d ", x);
        }
        sum = 0;
    }
    return 0;
}