#include<stdio.h>
#include<cs50.h>

int main(){
    string nome = get_string("qual é seu nome? \n");
    printf("hello, %s \n",nome);
}