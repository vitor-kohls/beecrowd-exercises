#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

	vector<int> pares;    
	vector<int> impares;    


	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		int x; 
		scanf("%d", &x);

		if(x % 2 == 0)
			pares.push_back(x);
		else
			impares.push_back(x);		
	}

	sort(pares.begin(), pares.end());

	sort(impares.rbegin(), impares.rend());


	vector<int>::iterator it;
	for(it = pares.begin(); it != pares.end(); it++){
			printf("%d\n", *it);
	}
	for(it = impares.begin(); it != impares.end(); it++){
			printf("%d\n", *it);
	}		
	
	
    return 0;
}
