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





    // bee 1019
    int n,ghonta,minit,value,second;
    scanf("%d",&n);

    ghonta = n/3600;

    value = n%3600;

    minit = value/60;

    value = value%60;

    second = value;

    printf("%d:%d:%d\n", ghonta, minit, second);





        // bee 1020
    int n,day,month,year,value;
    scanf("%d", &n);

year = n/365;

value = n%365;

month = value/30;

value = value%30;

day = value;
printf("%d ano(s)\n",year);
printf("%d mes(es)\n",month);
printf("%d dia(s)\n",day);

    


// bee 1021

double n;
scanf("%lf",&n);

n = n*100;
int convert = n;
printf("NOTAS:\n");

int value,taka100,taka50,taka20,taka10,taka5,taka2,taka1,taka050,taka025,taka010,taka005,taka001;

taka100 = convert / 10000;
printf("%d nota(s) de R$ 100.00\n",taka100);

value = convert%10000;

taka50 = value/5000;
printf("%d nota(s) de R$ 50.00\n",taka50);

value = value%5000;

taka20 = value/2000;
printf("%d nota(s) de R$ 20.00\n",taka20);

value = value%2000;

taka10 = value/1000;
printf("%d nota(s) de R$ 10.00\n",taka10);

value = value%1000;

taka5 = value/500;
printf("%d nota(s) de R$ 5.00\n",taka5);

value = value%500;

taka2 = value/200;
printf("%d nota(s) de R$ 2.00\n",taka2);

printf("MOEDAS:\n");

taka1 = value/100;
printf("%d moeda(s) de R$ 1.00\n",taka1);

value = value%100;

taka050 = value/50;
printf("%d moeda(s) de R$ 0.50\n",taka050);

value = value%50;

taka025 = value/25;
printf("%d moeda(s) de R$ 0.25\n",taka025);

value = value%25;

taka010 = value/10;
printf("%d moeda(s) de R$ 0.10\n",taka010);

value = value%10;

taka005 = value/5;
printf("%d moeda(s) de R$ 0.05\n",taka005);

value = value%5;

taka001 = value/1;
printf("%d moeda(s) de R$ 0.01\n",taka001);
    



    


    return 0; 

}






