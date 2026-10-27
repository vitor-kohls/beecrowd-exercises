#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f

//g++ X.cpp && ./a.out



using namespace std;


int main() {


	int n,e;
	cin >> n >> e;

	while(n || e){
	int graph[n+1][n+1];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i ==j)
				graph[i][j] = 0;
			else
				graph[i][j] = inf;
		}
	}
    
	for(int i = 0; i < e; i++){
		int x,y,h;

		cin >> x >> y >> h;

		graph[x][y] = h;
	}




	 for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Se existe caminho de i para j E de j para i (diferentes de INF e 0)
            if (graph[i][j] != INF && graph[j][i] != INF && i != j) {
                graph[i][j] = 0;
                graph[j][i] = 0;
            }
        }
    }

    for (int k = 1; k <= n; k++) {
       for (int i = 1; i <= n; i++) {
           for (int j = 1; j <= n; j++) {
               // Se o caminho passando por k for menor, atualiza
               if (graph[i][k] + graph[k][j] < graph[i][j]) {
                   graph[i][j] = graph[i][k] + graph[k][j];
               }
           }
       }
   }

   
	int k;

	cin >> k;

	for(int i = 0; i < k; i++){
		int o, d;
		cin >> o >> d;

		 if (graph[o][d] >= INF) {
            cout << "Nao e possivel entregar a carta\n";
         } else {
			cout << graph[o][d] << "\n";
         }
	}
	cout << "\n";

	cin >> n >> e;
	}
    return 0;
}
