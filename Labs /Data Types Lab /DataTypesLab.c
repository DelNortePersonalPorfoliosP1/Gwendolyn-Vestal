//
//  DataTypesLab.c
//  Data Types and IO Lab
//
//  Created by Vestal, Gwendolyn on 9/20/19.
//  Copyright © 2019 Vestal, Gwendolyn. All rights reserved.
//

#include "DataTypesLab.h"
#include <stdio.h>

int datatypes(void){
    
        int arr1[100];
        int i, mx, mn, n;
        
        printf("Input the number of elements to be stored in the array :");
        scanf("%d",&n);
        
        printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++)
        {
            printf("element - %d : ",i);
            scanf("%d",&arr1[i]);
        }
        
        
        mx = arr1[0];
        mn = arr1[0];
        
        for(i=1; i<n; i++)
        {
            if(arr1[i]>mx)
            {
                mx = arr1[i];
            }
            
            
            if(arr1[i]<mn)
            {
                mn = arr1[i];
            }
        }
        printf("Maximum element is : %d\n", mx);
        printf("Minimum element is : %d\n\n", mn);

    return 0;
    
}
