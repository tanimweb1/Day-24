#include<stdio.h>
int main(){



int spent,average, need,distance;
scanf("%d%d",&spent,&average);

distance = spent*average;

need = distance/12;

printf("%0.3f\n", (double)need);








    return 0; 
}