#include <stdio.h>

//1.2 Variables and arithmetic expression
void Fahrenheit_Celsius(){
    float fahr,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr<=upper){
        celsius = 5*(fahr-32)/9;
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
}

void Fahrenheit_Celsius_for(){
    int fahr;
    for(fahr = 0 ;fahr<=300;fahr+=20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}

void char_io(){
    int c ;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
}

void char_io_2(){
    int c ;
    while((c = getchar()) != EOF)
        putchar(c);
}

void verify(){
    int c ;
    while(c = getchar()!=EOF)
        printf("%d",EOF);
}

void char_counter(){
    long nc ;
    nc = 0;
    while (getchar() != EOF )
        ++nc;
    printf("%ld",nc);
}

int main() {
    Fahrenheit_Celsius();

    printf("-------------------------------\n");

    Fahrenheit_Celsius_for();

    printf("-------------------------------\n");

    //char_io_2();

    //verify();

    //char_counter();

    return 0;
}