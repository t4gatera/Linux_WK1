#include<stdio.h>
int add(int a, int b);
void main(){
int a, b, sum;
printf("Enter the first value\n");
scanf("%d",&a);

printf("Enter the second value\n");
scanf("%d",&b);
sum = add(a,b);

printf("The sum of two values is: %d\n",sum);
}
int add(int a, int b){
return a+b;
}
