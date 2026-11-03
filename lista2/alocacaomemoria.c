#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, n, i;
    scanf("%d", &n);
    p = malloc( sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
       printf("P[%d] = ", i);
       scanf("%d", p + i); // &p[i]
    }
    
    // free() retira oq ta na memoria malloak coloca na memoria
}