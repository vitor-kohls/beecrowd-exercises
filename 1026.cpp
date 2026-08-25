#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    unsigned long a, b;


    while (scanf("%ld %ld", &a, &b) != EOF){
        unsigned long c;

        c = (~a & b) | (a & ~b);

        printf("%ld\n", c);
    }

    //printf("%ld\n%ld\n",a,b);


    return 0;
}