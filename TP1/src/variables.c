#include <stdio.h>

int main() {
    // Types char
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 250;

    // Types short
    short s = -123;
    unsigned short us = 50000;

    // Types int
    int i = -1000;
    unsigned int ui = 4000000000U;

    // Types long
    long int li = -500000L;
    unsigned long int uli = 3000000000UL;

    // Types long long
    long long int lli = -900000000000LL;
    unsigned long long int ulli = 18000000000000ULL;

    // Types flottants
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456L;

    // Affichage
    printf("char               : %c\n", c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n\n", uc);

    printf("short              : %hd\n", s);
    printf("unsigned short     : %hu\n\n", us);

    printf("int                : %d\n", i);
    printf("unsigned int       : %u\n\n", ui);

    printf("long int           : %ld\n", li);
    printf("unsigned long int  : %lu\n\n", uli);

    printf("long long int      : %lld\n", lli);
    printf("unsigned long long : %llu\n\n", ulli);

    printf("float              : %f\n", f);
    printf("double             : %lf\n", d);
    printf("long double        : %Lf\n", ld);

    return 0;
}
