#include <stdio.h>  
  
int main() {  //main function  
    // Integer types  
    short int a = 45;         // short int  
    unsigned short int b = 7545; // unsigned short int  
    int c = 2154455;          // int value  
    unsigned int d = 441454581; // unsigned int  
    long int e = 24525366552;     // long int  
    unsigned long int f = 4294967295; // unsigned long int  
    long long int g = 854223755457775807; // long long int  
    unsigned long long int h = 8565225254522331615U; // unsigned long long int  
  
    printf("short int a = %hd\n", a);  
    printf("unsigned short int b = %hu\n", b);  
    printf("int c = %d\n", c);  
    printf("unsigned int d = %u\n", d);  
    printf("long int e = %ld\n", e);  
    printf("unsigned long int f = %lu\n", f);  
    printf("long long int g = %lld\n", g);  
    printf("unsigned long long int h = %llu\n", h);  
  
    return 0;  
}  