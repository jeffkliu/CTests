//
//  main.c
//  Udemy
//
//  Created by Jeffrey Liu on 8/3/18.
//  Copyright © 2018 Jeffrey Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int var, x;
    printf("Enter an integer: ");
    scanf("%d", &var);
    x = var + 1;
    printf("The value is: %d and %d\n", var, x);
    return 0;
}
