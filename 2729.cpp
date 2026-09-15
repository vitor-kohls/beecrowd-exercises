#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

    int n;
    cin >> n;

	for(int x = 0; x < n; x++){
	    set<string> s;
		char compras[1010 * 20];
		scanf(" %[^\n]", compras);
		int start = 0, end = 0;
		string palavra;
		for(int i = 0; compras[i] != '\0'; i++){
			if(compras[i] == ' ' || compras[i+1] == '\0'){

				if(compras[i+1] == '\0')			
					end = i+1;
				else
					end = i;
				int tamanho = end - start;
				palavra = string(&compras[start], tamanho);
				
				//cout << palavra << endl;				
				start = i+1;
				s.insert(palavra);
			}			
		}
		string aux = "";
		for(set<string>::iterator it = s.begin(); it != s.end(); it++){
			if(it != s.begin())
				aux = " ";		
			cout << aux << *it;
		}
		cout << endl;
	}

	

    return 0;
}
