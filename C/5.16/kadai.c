#include <stdio.h>
float chohokeinomenseki(float a,float b);

int main(void){
float s=chohokeinomenseki(5.0,3.0);

printf("%f\n",s);
    return 0;
}

float chohokeinomenseki(float a,float b){
    float s;
    s=a*b;
    return s;
}