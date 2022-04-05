#include <stdio.h>

int main(){
    int a,m,d,n,re;
    scanf("%d %d %d %d",&a,&m,&d,&n);
    int i;
    re = a;
    printf("%d %d %d %d %d",a,m,d,n,re);
    for (i = 0; i < n;i++){
        re = re*m+d;
        printf("%d",re);
    }

    return 0;
}