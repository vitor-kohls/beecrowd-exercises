#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

	int a, b;

	scanf("%d %d", &a, &b);    

	string fase;
	if(b < 3)
		fase = "nova";
	else if(b >= 97)
		fase = "cheia";
	else if(b > a)
		fase = "crescente";
	else if (a > b)
		fase = "minguante";

	cout << fase << endl;
	

    return 0;
}
