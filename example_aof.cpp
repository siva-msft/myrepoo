/* For reference, the test repo on GitHub: https://github.com/siva-msft/p-test */

#include <limits.h>

void aof_1() {
    int num;
    // BAD: may overflow if input is very large
    int scaled = num + 1000;
    int num2;
    int scaled2;
    // GOOD: use a guard to prevent overflow
    if (num2 < INT_MAX-1000)
        scaled2 = num2 + 1000;
    else
        scaled2 = INT_MAX;
}

int main() {
    aof_1();
}