#include "stopping_tolfun.h"
#include <stdio.h>  // printf
#include <stdbool.h> //bool

int main()
{
    double tolfun = 0.001;
    double f0 = 10.001;
    double f1 = 10.002;
    bool res;
    
    res = stopping_tolfun(f1, f0, tolfun);
    printf("%s\n", res ? "true -> terminate" : "false -> proceed");

    tolfun = 0.01;
    res = stopping_tolfun(f1, f0, tolfun);
    printf("%s\n", res ? "true -> terminate" : "false -> proceed");
}