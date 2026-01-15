#include <stdio.h>
void main(){
int a=5;
int b=6;
printf("Before swapping:%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping:a=%d,b=%d\n",a,b);
}
