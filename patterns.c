#include <stdio.h>

int main(){
    // creating a square or rectangle from input dimensions

    int length,width,i,j;
    printf("Enter the length of the rectangle here : ");
    scanf("%d",&length);
    printf("Enter the width of the rectangle here : ");
    scanf("%d",&width);
    for(j = 1; j <= width; j++){
        for(i = 1; i <= length; i++){
        printf("*");
    }
    printf("\n");
    }

    // creating an increasing triangle pattern from input dimension

    int a, b, c;
    printf("Enter the number of lines you desire in your increasing triangle pattern : ");
    scanf("%d", &a);
    for(c = 1; c <= a; c++){
        for(b = 1; b <= c; b++){
        printf("*");
    }
    printf("\n");
    }

    // creating a decreasing triangle pattern from input dimensions

    int d,e,f;
    printf("Enter the number of lines you desire in the increasing triangle pattern : ");
    scanf("%d", &d);
    for(f = 1; f <= d; f++){
        for(e = f; e <= d; e ++){
        printf("*");
    }
    printf("\n");
    }

    return 0;
}