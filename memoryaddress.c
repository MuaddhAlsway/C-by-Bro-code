#include <stdio.h>


int main(){

    ///char a = 'X';
    //char b = 'Y';
    //char c = 'Z';

    //short a = 'X';
    //short b = 'Y';
    //short c = 'Z';

    //int a = 'X';
    //int b = 'Y';
    //int c = 'Z';

   // double a = 'X';
    //double b = 'Y';
    //  double   c = 'Z';

    char a;
    char b[1];
    char d[2];
    char e[3];
    short r[3];
    int q[3];
    double p[3];
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("%d bytes\n", sizeof(r));
    printf("%d bytes\n", sizeof(q));
    printf("%d bytes\n", sizeof(p));


    //printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &r);
    printf("%p\n", &q);
    printf("%p\n", &p);
    //printf("%p\n", &c);

    return 0;
}