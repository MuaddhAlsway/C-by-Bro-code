#include<stdio.h>
#include<stdbool.h>

int main(){

    char a = 'C';                        // singale character %c
    char b[] = "Bro";                    // array of characters %s
    int j = 2147483647;                  // 4bytes(-2,147,483 to 2,147,483 ) %d
    unsigned int k = 4294967295;          // 4bytes(0 to +4,294,967,295 ) %u
    float c = 3.141596535689793;         // 4 bytes (32 bits of precision) 6  - 7  digit %f
    double d = 3.141596535689793;       // 8 bytes (64 bits of precision) 15 - 16 digits %lf
    bool e = true;   bool ee = false;  // 1 byte (true or false) %d 
    char f = 100;    char ff = 120;     // 1byte(-128 to + 128) %d or %c
    unsigned char g = 255;             //1 byte (0 to +255) %d or %c
    
    short int h = 32767;  short int hh = 32777;               // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;  unsigned short int ii = 65536;     // 2 bytes (0 to +65,535) %d

    long long int I = 9223372036854775807; // 8bytes (-9quintilion to +9quintitlion) %lld
    unsigned long long int m = 18446744070955161588U; // 8bytes (0 to +18quintllion) %llu
    
    
    
    //Display area
    printf("%f\n", c); 
    printf("%lf\n", d); 
    printf("%0.15f\n", c); 
    printf("%0.15lf\n", d); 
    printf("%d\n", e); 
    printf("%d\n", ee);
    printf("%d\n", f);
    printf("%c\n", f);
    printf("%c\n", ff);
    printf("%d\n", ff);
    printf("%d\n", h);
    printf("%d\n", hh);
    printf("%d\n", i);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);
    printf("%lld\n", I);
    printf("%llu\n", m);
}