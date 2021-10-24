/*
Author: chamod dananjaya
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void main()
{
    int s,c=1,temp;


    printf("enter your size of the array: ");
    scanf("%d",&s);

    int ar[s];

    printf("enter your array: \n");
    for(int i=0;i<s;i++){
        printf("\t%d. ",c);
        scanf("%d",&ar[i]);
        c++;
    }

    for(int x=1;x<s;x++){
        for(int y=0;y<s;y++){
            if(ar[y]>ar[x]){
                temp=ar[y];
                ar[y]=ar[x];
                ar[x]=temp;
            }
        }
    }

    printf("\nyour sorted array is: ");
    for(int n=0;n<s;n++){
        printf("%d ",ar[n]);
    }
    printf("\n\n");

}
