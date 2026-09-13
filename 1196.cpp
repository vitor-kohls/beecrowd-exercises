#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

char get_carac(char c){
	const char* teclado = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	if(c == ' ')
		return c;

	for(int i = 0; i < strlen(teclado); i++){
		if(teclado[i] == c)
			return teclado[i-1];
	}
	return 'm';	
}

int main() {


	char palavra[1000];
	while(	fgets(palavra, sizeof(palavra), stdin) != NULL){
		for(int i = 0; i < strlen(palavra); i++){
			printf("%c",get_carac(palavra[i]));
		}
	}

	
    return 0;
}
