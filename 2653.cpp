#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

    set<string> sett;
    string s;
    while(cin >> s){
    	sett.insert(s);
    }

	cout << sett.size() << endl;

    return 0;
}
