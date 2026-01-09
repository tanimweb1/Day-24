#include<stdio.h>
int main(){



int spent,average, need,distance;
scanf("%d%d",&spent,&average);

distance = spent*average;

need = distance/12;

printf("%0.3f\n", (double)need);



// Distance beecrowd 

    
int x;
scanf("%d",&x);

printf("%d minutos\n", x*2);




       // bee 1017

    int spent, average, distance;
    scanf("%d%d", &spent, &average);

    distance = spent * average;

    printf("%0.3lf\n", distance / 12.0); 







    //  bee 1018

int n,taka100,taka50,vagsesh,taka20,taka10,taka5,taka2,taka1;
scanf("%d", &n);
printf("%d\n", n);


taka100 = n/100;
printf("%d nota(s) de R$ 100,00\n",taka100);

vagsesh = n%100;

taka50 = vagsesh/50;
printf("%d nota(s) de R$ 50,00\n",taka50);

vagsesh = vagsesh%50;

taka20 = vagsesh/20;
printf("%d nota(s) de R$ 20,00\n",taka20);

vagsesh = vagsesh%20;

taka10 = vagsesh/10;
printf("%d nota(s) de R$ 10,00\n",taka10);

vagsesh = vagsesh%10;

taka5 = vagsesh/5;
printf("%d nota(s) de R$ 5,00\n",taka5);

vagsesh = vagsesh%5;

taka2 = vagsesh/2;
printf("%d nota(s) de R$ 2,00\n",taka2);

vagsesh = vagsesh%2;

taka1 = vagsesh/1;
printf("%d nota(s) de R$ 1,00\n",taka1);



    return 0; 

}


