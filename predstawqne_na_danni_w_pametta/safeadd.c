#include "safeint.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = safestrtoint(argv[1]);
    int b = safestrtoint(argv[2]);
    safeadd(a,b);

    return 0;
}