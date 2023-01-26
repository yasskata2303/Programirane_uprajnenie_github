#include <stdio.h>
#include "quadraticroots.h"

int main(){
    struct QuadraticRootsResult result = findroots(1,-5,6);
    if(result.norealroots=='1') printf("No real roots");
    else{
        printf("%Lf\n",result.x1);
        printf("%Lf\n",result.x2);
    }
}