//Q.8 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;

for(i=1;i<=15;i++){

     for(j=i;j>=i;j++){
    
     printf("%d",j);
       

    }

printf("\n");

}


getch();
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
