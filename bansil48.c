//Q.4 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;

for(i=1;i<=5;i++){

     for(j=i;j<=5;j++){
    
     printf("%d ",j);
       

    }

printf("\n");

}
getch();
}
/*
OUTPIUT:
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5*/
