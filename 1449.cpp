#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

	int t;
	scanf("%d", &t);    

	for(int i = 0; i < t; i++){
		map<string, string> dict;

		int m,n;
		scanf("%d %d", &m, &n);

		for(int j = 0; j < m; j++){
			char c[90];
			char v[90];

			scanf(" ");
			fgets(c, sizeof(c), stdin);
			fgets(v, sizeof(v), stdin);

			c[strcspn(c, "\n")] = '\0';
			v[strcspn(v, "\n")] = '\0';

			dict.insert( make_pair(c, v) );
		}

		//map<string, string>::iterator it;
		//for(it = dict.begin(); it != dict.end(); it++){
		//	cout << "Chave: |" << it->first << "|" << endl << "Valor: |" << it->second << "|\n";
		//}
		
		for(int j = 0; j < n; j++){
			char frase[90];

			scanf(" ");
			fgets(frase, sizeof(frase), stdin);
			frase[strcspn(frase, "\n")] = '\0';

			int start=0, end=0;
			char palavra[90];
			string aux = "";
			for(int x = 0; frase[x] != '\0'; x++){
				if(frase[x] == ' ' || frase[x+1] == '\0'){

					if(frase[x+1] == '\0')
						end = x+1;
					else
						end = x;
					
					strncpy(palavra, frase + start, end-start);
					palavra[end-start] = '\0';
			
					
					start = x+1;
					// Garantir que o caractere incial da prox palavra
					// nao comeca com espaço	
					//cout << "Analisando a palavra: |" << palavra << "|\n";
					
					
					if(dict.find(palavra) != dict.end())
						cout << aux <<  dict[palavra];	
					else
						cout << aux << palavra;
					aux = " ";
				}
			}
			cout << endl;
		
			
		}
		cout << endl;
		
	}
	
    return 0;
}
