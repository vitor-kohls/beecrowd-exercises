#include <bits/stdc++.h>

int p;

int main(){
    scanf("%d", &p);

    int total = 0;
    int inicio = 1, digitos = 1;

    while (inicio <= p) {
    	//printf("Inicio: %d\n", inicio);
    	//printf("Total: %d\n", total);
    	//qprintf("Digitos: %d\n", digitos);
    	
        int fim = inicio * 10 - 1;
        if (fim > p) fim = p;
		//printf("Fim: %d\n", fim);


        total += (fim - inicio + 1) * digitos;
        inicio *= 10;
        digitos++;
    }

    printf("%d\n", total);
 
    return 0;
}
