#include <stdio.h>
#include <limits.h>

int main(){

    printf("%-14s%-14s%-14s%-14s%-14s%-14s\n","TYPE","FORMAT","BYTES","MAX","MIN","MAX_UNSIGNED");
    printf("%-14s%-14s%-14zu%-14d%-14d%-14u\n","int", "%d",sizeof(int),INT_MAX,INT_MIN,UINT_MAX);
    printf("%-14s%-14s%-14zu%-14d%-14d%-14u\n","char","%c",sizeof(char),CHAR_MAX,CHAR_MIN,UCHAR_MAX);
    printf("%-14s%-14s%-14zu%-14d%-14d%-14u\n","short","%hd",sizeof(short),SHRT_MAX,SHRT_MIN,USHRT_MAX);
    printf("%-14s%-14s%-14zu%-14d%-14d%-14u\n","long","%ld",sizeof(long),LONG_MAX,LONG_MIN,ULONG_MAX);
    printf("%-14s%-14s%-14zu%-14d%-14d%-14u\n","long long","%lld",sizeof(long long),LLONG_MAX,LLONG_MIN,ULLONG_MAX);
    return 0;
}
