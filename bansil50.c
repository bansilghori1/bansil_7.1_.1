//Q.6 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;

for(i=1;i<=5;i++){

     for(j=i;j<=5;j++){
    
     printf("%d",j%2);
       

    }

printf("\n");

}


getch();
}
/*
1 0 1 0 1
1 0 1 0
1 0 1
1 0 
1
*/
