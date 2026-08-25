#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    int x1, y1, x2, y2;
    int teste = 1;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while(x1 && y1 && x2 && y2){
        int n;
        scanf("%d", &n);

        int mx, my;
        int hit_count = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &mx, &my);

            if( (mx >= x1 && mx <= x2) && (my <= y1 && my >= y2))
                hit_count++;
        }
        printf("Teste %d\n%d\n", teste, hit_count);
        teste++;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }


    return 0;
}