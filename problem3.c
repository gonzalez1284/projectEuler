#include <stdio.h>
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

// POOR SOLUTION, WASTE OF BITS..
int main(){

    int i = 2;
    unsigned long long v = 600851475143;

    for(i; i < v; i++){

        if( (v % i) == 0 ){

            if(isPrime(i)){

                printf("%d\n", i);

            }

        }

    }

    return 0;
}

int isPrime(int n){

    int i = 2;

    for(i ; i < n; i++){

        if(n % i == 0){

            return 0;

        }


    }

    return 1;

}
