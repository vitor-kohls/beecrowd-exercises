#include <bits/stdc++.h>

int main() {

    int k, n, m;
    
    scanf("%d", &k);
    while(k){
        scanf("%d %d", &n, &m);

        for(int i = 0; i < k; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            
            if(x == n || y == m){
                printf("divisa\n");
                continue;
            }

            if(x > n){
                if (y > m)
                    printf("NE\n");
                else if (y < m)
                    printf("SE\n");
            }else{
                if (y > m)
                    printf("NO\n");
                else if (y < m)
                    printf("SO\n");
            }
                
        }
        scanf("%d", &k);
    }
    

    return 0;
}