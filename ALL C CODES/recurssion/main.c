#include <stdio.h>
#include <stdlib.h>
void fun(int n){
    {
printf("%d",n);
fun(n-1);}
}


int main()
{
    int x=3;
    fun(x);
}
