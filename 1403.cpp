#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

	int n, m;

	scanf("%d %d", &n, &m);
	while(n || m){
		map<int, int> mp;
		map<int, int>::iterator it;
		
		for(int i = 0; i < n; i++){
			int rank[m];
			for(int j = 0; j < m; j++){
				scanf("%d", &rank[j]);

				if(mp.find(rank[j]) == mp.end()){
					mp.insert( make_pair(rank[j], 1) );
					//printf("Chave %d criada!\n", rank[j]);
				}else{
					mp[rank[j]] += 1;
					//printf("Chave %d atualizada para %d\n", rank[j], mp[rank[j]]);
				}
			}							
		}
		int maior = 0, s_maior = 0;
		for(it = mp.begin(); it != mp.end(); it++){
			//printf("%d: %d\n", (*it).first, (*it).second);
			int cont = (*it).second;
			if(cont > maior){
				s_maior = maior;
				maior = cont;
			}
		}
		//printf("Maior: %d\nS_Maior: %d\n",maior, s_maior);
		
		for(it = mp.begin(); it != mp.end(); it++){
			//printf("%d: %d\n", (*it).first, (*it).second);
			if((*it).second == s_maior){
				printf("%d ", (*it).first);
			}
		}
		printf("\n");

		//printf("N e M: ");		
		scanf("%d %d", &n, &m);
	}

    return 0;
}
