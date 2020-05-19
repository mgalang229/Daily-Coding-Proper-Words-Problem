// Using C++ by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s[255];
	cin.getline(s, 255);
	for(int i = 0; i < (int)strlen(s); i++){
		if(isdigit(s[i])){
			cout << "Invalid Input\n";
			return 0;
		}
	}
	for(int i = 0; i < (int)strlen(s); i++){
		if(i == 0 || s[i-1] == ' '){
			char l = toupper(s[i]);
			cout << l;
		} else{
			cout << s[i];
		}
	}
	cout << "\n";
	return 0;
}
