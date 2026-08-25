#include <bits/stdc++.h>

float preco(int cod){
    switch(cod){
        case 1001:
            return 1.50;
        case 1002:
            return 2.50;
        case 1003:
            return 3.50;
        case 1004:
            return 4.50;
        case 1005:
            return 5.50;
    }
    return 0;
}

int main(){
    int p;
    scanf("%d", &p);

    float total = 0;

    for(int i = 0; i < p; i++){

        int cod, quant;
        scanf("%d %d", &cod, &quant);
        total += preco(cod) * quant;
    }

    printf("%.2f\n",total);

}