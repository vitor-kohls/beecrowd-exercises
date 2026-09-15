#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

    int n;

    cin >> n;

	int count = 1;
	while(n){
	    char nome1[15];
	    char nome2[15];

		scanf("%s %s", nome1, nome2);

		//cout << nome1 << endl;
		//cout << nome2 << endl;

		cout << "Teste " << count << endl;
	
		for(int i = 0; i < n; i++){
			int a, b;
			scanf("%d %d", &a, &b);

			if((a + b) % 2 == 0)
				cout << nome1 << endl;
			else 
				cout << nome2 << endl;
		}
		cout << endl;
		count++;
		cin >> n;
	}
    return 0;
}
