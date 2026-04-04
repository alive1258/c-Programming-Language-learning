#include <stdio.h>

int main(){
    int a;
    float f =1.88;
    char c='q';
    scanf("%d\n",&a);
    scanf("%f\n",&f);
    scanf("%c",&c);
    printf("you entered float: %f\n",f);
    printf("you entered character: %c\n",c);
    printf("you entered integer: %d\n",a);
    return 0;
}