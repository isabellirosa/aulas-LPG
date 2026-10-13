#include <stdio.h>

int maiorValor(int a, int b, int c){
if(a>=b && a>=c){
    return a;
}else if(b>=c && b>=a){
    return b;
}else{
    return c;
}
}

int main()
{
  int x,y,z;
  scanf("%d%d%d", &x, &y, &z);
  printf("%d\n", maiorValor(x, y, z));

  return 0;
}