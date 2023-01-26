#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a,long double b,long double c){
    struct QuadraticRootsResult result;
    float dis=b*b-4*a*c;
    if(dis<0) result.norealroots = '1';
    if(dis==0){
        result.x1=(b/(2*a));
        result.x2=(b/(2*a));
        result.norealroots = '0';
    }
    if(dis>0){
        result.x1=(-b-sqrtl(dis))/(2*a);
        result.x2=(-b+sqrtl(dis))/(2*a);
        result.norealroots = '0';
    }
    return result;
}
