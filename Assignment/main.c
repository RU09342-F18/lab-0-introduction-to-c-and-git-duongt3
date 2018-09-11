#include <stdio.h>
#include "math.h"

int main() {

    char operation[12];

    operation[0] = '+';
    operation[1] = '-';
    operation[2] = '*';
    operation[3] = '/';
    operation[4] = '%';
    operation[5] = '<';
    operation[6] = '>';
    operation[7] = '&';
    operation[8] = '|';
    operation[9] = '^';
    operation[10] = '~';
    operation[11] = '@';

    for (int i = 0; i < 12; i++) {

        int ans = math(i, i, operation[i]);

        printf("%d  %c  %d  =  %d \n", i, operation[i], i, ans);

    }

}
