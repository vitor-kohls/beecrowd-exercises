#include <bits/stdc++.h>

int main() {

    float n;

    int notas[6] = {100, 50, 20, 10, 5, 2};
    float moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    scanf("%f", &n);
    n *= 100; // Evitar fazer conta com numeros decimáis, dá problema de arredondamento

    int troco_notas[6], troco_moedas[6];
    for(int i = 0; i < 6; i++){
        troco_notas[i] = 0;
        troco_moedas[i] = 0;
    }

    for(int i = 0; i < 6; i++){
        int nota = notas[i] * 100;
        if (n - nota < 1 && n - nota >= 0){
            n -= nota;
            troco_notas[i] = 1;
            continue;
        }
        if(n > nota){
            troco_notas[i] = (int) n / nota;
            n -= nota * (int) (n / nota);
        }   
    }

    // moedas
    for(int i = 0; i < 6; i++){
        float moeda = moedas[i] * 100;
        if (n - moeda <= moeda && n-moeda >=0){
            n -= moeda;
            troco_moedas[i] = 1;
        }else if(n >= moeda){
            troco_moedas[i] = round(n / moeda);
            n -= moeda *  round(n / moeda);
        }   
    }

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d nota(s) de R$ %d.00\n",troco_notas[i], notas[i]);
    }
    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d moeda(s) de R$ %.2f\n",troco_moedas[i], moedas[i]);
    }
    return 0;
}