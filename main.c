//
// Created by morga on 30.01.2023.
//
#include <stdio.h>
#include <math.h>

#include "library.h"

int main(void)
{
    int m; char ch[20];

    printf("\nEnter the input as 'sin 90' and 'asin 0.5' for inverse and 'exit' to exit:\n");
    while(1){
        printf("\nInput: ");
        gets(ch);
//if(ch[0]=='e') exit(0);
        switch(ch[0])
        {
            case 's': printf("Output: %f",sin(input(ch)));
                break;
            case 'c': printf("Output: %f",cos(input(ch)));
                break;
            case 't': printf("Output: %f",tan(input(ch)));
                break;
            case 'a': switch(ch[1])
                {
                    case 's': printf("Output: %f",asin(input(ch)));
                        break;
                    case 'c': printf("Output: %f", acos(input(ch)));
                        break;
                    case 't': printf("Output: %f",atan(input(ch)));
                        break;
                };
                break;
            default: printf("Invalid Input! Retry");
        };
    }
}
