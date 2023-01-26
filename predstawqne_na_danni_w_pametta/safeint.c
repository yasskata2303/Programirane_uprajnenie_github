#include "safeint.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct SafeResult safeadd(int a,int b){
    struct SafeResult result;
    if(a+b>INT_MAX||a+b<INT_MIN){
        result.errorflag = "1";
    }else{
        result.errorflag = "0";
        result.value = a+b;
    }

    return result;

}

struct SafeResult safesubtract(int a,int b){
    struct SafeResult result;
    if(a-b>INT_MAX||a-b<INT_MIN){
        result.errorflag = "1";
    }else{
        result.errorflag = "0";
        result.value = a-b;
    }

    return result;
    
}

struct SafeResult safemultiply(int a,int b){
    struct SafeResult result;
    if(a*b>INT_MAX||a*b<INT_MIN){
        result.errorflag = "1";
    }else{
        result.errorflag = "0";
        result.value = a*b;
    }

    return result;
    
}

struct SafeResult safedivide(int a,int b){
    struct SafeResult result;
    if(a/b>INT_MAX||a/b<INT_MIN){
        result.errorflag = "1";
    }else{
        result.errorflag = "0";
        result.value = a/b;
    }

    return result;
    
}

struct SafeResult safestrtoint(char str[]){
    struct SafeResult n;
    n.value = 0;
    int a;
    for(int i = 0;str[i]!='\0';i++){
        n.value = a*10 + (str[i]-48);
    }
    return n;
}