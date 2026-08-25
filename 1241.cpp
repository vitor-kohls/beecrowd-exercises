#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        char a[1000], b[1000];

        scanf("%s %s",a, b);
        //printf("%s\n%s\n",a,b);

        int b_size = strlen(b);
        //printf("Tamanho de b é: %d\n",b_size);
        
        int start_a = strlen(a) - b_size;
        // printf("%s\n", a + start_a);

        if(strcmp(a + start_a, b) == 0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }


    return 0;
}