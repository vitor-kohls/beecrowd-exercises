#include <bits/stdc++.h>

//g++ X.cpp && ./a.out



int main() {

    
    int dias;
    scanf("%d",&dias);
    int resto = 0;
    int anos = dias / 365;
    resto = dias % 365;

    int meses = resto / 30;
    resto %= 30;

    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",resto);

    return 0;
}