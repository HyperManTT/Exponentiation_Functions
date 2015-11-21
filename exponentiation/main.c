//
//  main.c
//  exponentiation
//
//  Created by Randy Ram on 21/11/2015.
//  Copyright © 2015 Randy Ram. All rights reserved.
//

#include <stdio.h>


//Exponentiation by squaring - recursive
double exp_recursive(int base, int exponent)
{
    if (exponent == 0) return 1;
    if (exponent == 1) return base;
    if (exponent % 2 == 0)
    {
        return exp_recursive(base * base, exponent / 2);
    }
    else
    {
        return exp_recursive(base * base, (exponent - 1) / 2);
    }
}

//Exponentiation by squaring - iterative
double exp_iter(int base, int exponent)
{
    if (exponent == 0) return 1;
    int y = 1;
    while (exponent > 1)
    {
        if (exponent % 2 == 0)
        {
            base = base * base;
            exponent = exponent / 2;
        }
        else
        {
            y = base * y;
            base = base * base;
            exponent = (exponent - 1) / 2;
        }
    }
    return base * y;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("%f\n", exp_recursive(3, 2));
    printf("%f\n", exp_iter(3, 3));
    return 0;
}
