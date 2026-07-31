#include<iostream>
#include<vector>


double myPow(double x, int n){
    long binForm = n;
    double ans = 1;

    while(binForm > 0){
        if(bimForm % 2  == 1){
            ans *= x;
        }

        x *= 2;
        binForm /= 2;
    }

    return ans
}

int main(){

}