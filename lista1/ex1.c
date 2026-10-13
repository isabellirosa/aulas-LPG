#include <stdio.h>

int main(){

    float x,y;
    scanf("%f%f", &x,&y);
    
    if(x==0 && y==0){
        printf("origem\n");
    }
    else if(x==0){
        printf("eixo x\n");
    }
    else if(y==0){
        printf("eixo y\n");
    }
    else if(x>0 && y>0){
        printf("q1\n");
    }
    else if(x>0 && y<0){
        printf("q4\n");
    }
    else if(x<0 && y<0){
        printf("q3\n");
    }
    else{
        printf("q2\n");
    }

    return 0;
}