#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int soma_divisores(int n){
    int sum = 0;
    for(int i = n-1; i >= 1; i--){
        if(n % i == 0)
            sum += i;
    }
    
    return sum;
}

int main() {

    int n, x;
    scanf("%d", &n);

    for(int i = 0; i <n; i++){
        scanf("%d", &x);
        int soma = soma_divisores(x);
        
        if(x == soma)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);

    }

    return 0;
}