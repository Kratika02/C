#include <stdio.h>
#include <stdlib.h>
int max(int x,int y);

int main(){
    int a,b,m;
    scanf("%d%d",&a,&b);
    m=max(a,b);
    printf("%d",m);

}
int max(int x,int y){
if (x>y)
    return x;
else
    return y;
}
