#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int maior(int a, int b){
    if (a > b)
        return a;
    return b;
}

int menor(int a, int b){
    if (a < b)
        return a;
    return b;
}

int main(){
    int h, z, l;

    scanf("%d %d %d", &h, &z, &l);

    int ma = maior(h, maior(z, l));
    int me = menor(h, menor(z, l)); 

    if ((h < ma) && (h > me))
        printf("huguinho\n");
    else if ((z < ma) && (z > me))
        printf("zezinho\n");
    else
        printf("luisinho\n");

}