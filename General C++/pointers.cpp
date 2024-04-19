#include<iostream>

using namespace std;

int main(){
    int life;
    life = 4;

    int card;
    card = 40;

    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp;


    printf("value of card is : %d \n", my_card);
    printf("value of card is %p \n:", myp);
  
}