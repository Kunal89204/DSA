#include<iostream>

using namespace std;

int main(){
    int life;
    life = 4;

    int card;
    card = 40;


    int my_card = card;


    int *myp;
    myp = &my_card;

    my_card = *myp; // pointer dereferance

    cout<<my_card;
}