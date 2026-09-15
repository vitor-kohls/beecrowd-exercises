#include <bits/stdc++.h>

//g++ X.cpp && ./a.out


using namespace std;

int dot(int *a, vector<int> b, int tam){
	int sum = 0;
	for(int i = 0; i < tam; i++)
		sum+= a[i] * b[i];

	return sum;
}

int main() {

	int a[9];
	int b[2];

	while(scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",
		&a[0], &a[1], &a[2], &a[3], &a[4],
		&a[5], &a[6], &a[7], &a[8], &b[0],
		&b[1]
	) != EOF){

		vector<int> v = {1,2,3,4,5,6,7,8,9};

		int resto = dot(a, v, 9) % 11;
		if(resto == 10)
			resto = 0;
		bool cond_1 = resto == b[0];

		sort(v.rbegin(), v.rend());

		resto = dot(a, v, 9) % 11;
		if(resto == 10)
			resto = 0;
		bool cond_2 = resto == b[1];

	
		if(cond_1 && cond_2)
			cout << "CPF valido" << endl;
		else
			cout << "CPF invalido" << endl;

	}

    return 0;
}
