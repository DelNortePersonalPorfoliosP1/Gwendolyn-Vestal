//
//  Pythagoras Lab.c
//  Data Types and IO Lab
//
//  Created by Vestal, Gwendolyn on 9/19/19.
//  Copyright © 2019 Vestal, Gwendolyn. All rights reserved.
//

#include "Pythagoras Lab.h"
#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    double side1;
    double side2;
    
    printf("insert value for side1:    ");
    scanf("%lf",&side1);
    printf("insert value for side2:    ");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
}
