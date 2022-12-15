#include <stdio.h>

int main()
{
    int *p;
    int dizi[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for(int a = 0; a <10 ; a++)
    printf("%d \n", a);
    
    p = dizi;
    
    for(int i = 0; i <10 ; p++, i++)
    printf("pointer %d \n", *p);
    
    printf("Hello World");

    return 0;
}
