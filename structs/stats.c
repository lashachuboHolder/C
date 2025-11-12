#include "stdio.h"

struct stats4{
    int min;
    int max;
    double avg;
};

struct stats4 analyze(int a, int b, int c, int d){
    struct stats4 r;
    r.min = a;
    if (b < r.min) r.min = b;
    if (c < r.min) r.min = c;
    if (d < r.min) r.min = d;

    r.max = a;
    if (b > r.min) r.max = b;
    if (c > r.min) r.max = c;
    if (d > r.min) r.max = d;

    r.avg = (a + b + c + d)/4.0; //without ".0" the division would round up
    return r;
    // return r is the main difference why sometimes we'd use struct instead of function
    // fucntion can only return 1 variable while struct can return multiple
}

int main(void){
    struct stats4 s = analyze(7, 16, 11, -4);
    printf("min = %d max = %d avg = %.2f\n", s.min, s.max, s.avg);
    return 0;
}