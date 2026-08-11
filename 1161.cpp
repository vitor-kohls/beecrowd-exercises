#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

long int fat(int n){
    if(n == 1 || n == 0)
        return 1;
    return n * fat(n-1);
}

int main() {

    int m, n;

    while( scanf("%d %d", &m, &n) != EOF )
        printf("%li\n", fat(m) + fat(n));

    return 0;
}