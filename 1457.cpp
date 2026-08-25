#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

long double fat(int n, int k){
    if(n < 1)
        return 1;

    //printf("%d * fat(%d, %d)\n",n, n-k, k);
    return n * fat(n-k, k);
}

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num, ex_count=0;

        char texto[3 + 25];
        memset(texto, 0, sizeof(texto));
        scanf("%s", texto);

        //Tira um valor de uma str
        sscanf(texto, "%d", &num); 
        //printf("Do texto |%s|, foi tirado %d\n", texto, num);
        
        for(int j = 0; j < 3+25; j++){
            if(texto[j] == '!')
                ex_count++;
        }

        //printf("K = %d\n",ex_count);

        printf("%.0Lf\n", fat(num, ex_count));
    }

    return 0;
}