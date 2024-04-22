#include<iostream>


using namespace std;

int main(){
    int score = 700;

    int *myp = &score;

    cout<<myp;

    int &another_score = score;


    // another_score = 400;

    cout<<score;
}

