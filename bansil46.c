//Q.2 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;

for(i=5;i>=1;i--){

     for(j=i;j<=5;j++){
    
     printf("%d",j);
       

    }

printf("\n");

}
getch();
}
/*
OUTPIUT:

10101
10101
10101
10101
10101
*/