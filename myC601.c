#include<stdio.h>
void message();
void cat();

void main (){
    int animal=5;
    printf("Hello world\n");
    printf("%i",animal);
    message();
    cat();
}

void message(){
    printf("We can take mor sub function");
}

void cat(){
    printf("I Love my Cat\n");
}

