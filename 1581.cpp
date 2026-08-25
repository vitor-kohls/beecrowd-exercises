#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    int n, k;
    scanf("%d", &n);
    
    for(int i = 0; i < n; n++){
        scanf("%d", &k);

        char primeira[25];
        char outra[25];
        bool idioma_igual = true;
        scanf(" %s", primeira);
        for(int j = 1; j < k; j++){
            scanf(" %s", outra);
            if(strcmp(primeira, outra) != 0)
                idioma_igual = false;
        }

        if(idioma_igual)
            printf("%s\n", primeira);
        else
            printf("ingles\n");

    }

    return 0;
}