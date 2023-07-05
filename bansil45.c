//Q.1 Write a Program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int i,j;

for(i=1;i<=5;i++){

     for(j=i;j>=1;j--){
    
     printf("%d",j);
       

    }

printf("\n");

}
getch();
}
/*
OUTPIUT:
1
21
321
4321
54321

*/