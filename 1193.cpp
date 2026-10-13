#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;


int bin_to_dec(char* bin){
	int num = 0;
	int size = strlen(bin);
	for(int i = 0; i < size; i++){
		if(bin[i] == '1')
			num += pow(2, (size-1)-i);
	}
	return num;
}

int hex_to_dec(char* hex){
	int num = 0;
	int size = strlen(hex);
	for(int i = 0; i < size; i++){
		int x = 0;
		if(hex[i] >= 'a' && hex[i]<='z')
			x = 10 + (hex[i] - 'a');
		else
			x = hex[i] - '0';

		num += x * pow(16, (size-1)-i);
	}
	return num;
}

int str_to_dec(char* num){
	int n = 0;
	int size = strlen(num);
	for(int i = 0; i < size; i++){
		n += (num[i] - '0') * pow(10, (size-1)-i);
	}
	return n;
}

int main() {

	int x;
	cin >> x;

	char num[100], tipo[5];
	
	for(int i = 0; i < x; i++){
		scanf("%s %s", num, tipo);	

		printf("Case %d:\n",i+1);
		
		if(strcmp(tipo, "bin") == 0){
			int n = bin_to_dec(num);
			printf("%d dec\n", n);
			printf("%x hex\n", n);
		}else if(strcmp(tipo, "hex") == 0){
			int n = hex_to_dec(num);
			printf("%d dec\n", n);
			printf("%b bin\n", n);
		}else{
			int n = str_to_dec(num);
			printf("%x hex\n", n);
			printf("%b bin\n", n);
		}
		printf("\n");			
	}    


    return 0;
}
