#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

	int n;
	char a[1010], b[1010];
	scanf("%d", &n);    



	for(int i = 0; i < n; i++){
		scanf("%s %s", a, b);

		if(strlen(a) < strlen(b)){
			printf("nao encaixa\n");
			continue;
		}

		int size = strlen(b);

		//printf("a[%zu:-1] = %s\n", strlen(a)-size, a + (strlen(a)-size));
		
		if(strcmp(a + (strlen(a) - size), b) == 0)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");

	}


    return 0;
}
