//Q.7 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
char i,j;

for(i='A';i<='E';i++){

     for(j=i;j>='A';j--){
    
     printf("%c ",j);
       

    }

printf("\n");

}


getch();
}
/*
A
B A
C B A
D C B A
E D C B A
*/
