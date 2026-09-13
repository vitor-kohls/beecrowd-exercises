#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main(){

	float a,b,c;

	vector<float> v = {0,0,0};
	
	scanf("%f %f %f",&v[0], &v[1], &v[2]);

    sort(v.begin(), v.end());

	a = v[2];
	b = v[1];
	c = v[0];


	if(a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if(a*a == (b*b)+(c*c))
		printf("TRIANGULO RETANGULO\n");
	else if(a*a > (b*b)+(c*c))
		printf("TRIANGULO OBTUSANGULO\n");
	else if(a*a < (b*b)+(c*c))
		printf("TRIANGULO ACUTANGULO\n");

	 if(a == b && b == c)
		printf("TRIANGULO EQUILATERO\n");
	else if(a == b || a == c || b == c)
		printf("TRIANGULO ISOSCELES\n");

		
    return 0;
}
