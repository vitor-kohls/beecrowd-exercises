#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

	char exp[1010];

	while(scanf("%s",exp)!= EOF){	    
		stack<char> pilha;
		bool aux = true;
		for(int i = 0; i < strlen(exp); i++){
			if(exp[i] == '(')
				pilha.push('(');
			else if(exp[i] == ')'){
				if(!pilha.empty())
					pilha.pop();
				else
					aux = false;
				
			}
		}

		if(pilha.empty() && aux)
			printf("correct\n");
		else
			printf("incorrect\n");

		memset(exp, '\0', sizeof(exp));
	}
    return 0;
}
