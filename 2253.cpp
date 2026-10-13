#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {
	
	char senha[400];

	while(scanf(" %[^\n]", senha) != EOF){
		int tam = strlen(senha);
		int maius=0, minus=0, nums=0, spaces = 0, ponts = 0;
		if(tam >= 6 && tam <= 32){
			for(int i = 0; senha[i] != '\0'; i++){
				//cout << "Passando no for" << endl;
				char c = senha[i];
				
		    	if(c <= 'Z' && c >= 'A')
		    		maius++;
		    	else if(c <= 'z' && c >= 'a')
		    		minus++;
		    	else if(c<= ' ')
		    		spaces++;
		    	else if(c <= '9' && c >= '0')
		    		nums++;
		    	else
		    		ponts++;
		    }
		}
		if(tam < 6 || tam > 32 || nums == 0 || maius == 0|| minus == 0 || ponts > 0 || spaces > 0)
			cout << "Senha invalida." << endl;
		else
			cout << "Senha valida." << endl;
	}

    return 0;
}
