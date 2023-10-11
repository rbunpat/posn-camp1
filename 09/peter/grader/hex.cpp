#include <bits/stdc++.h> 
using namespace std; 


void checkHex(string s) 
{ 

	int n = s.length(); 
	for(int i = 0; i < n; i++) 
	{ 
		char ch = s[i]; 
        ch = toupper(ch);

		if ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'F')) 
		{ 
			cout << "Invalid" << endl; 
			return; 
		} 
	} 

	cout << "Hex number" << endl; 
} 

int main() 
{ 

	string s;
    cin >> s;

	checkHex(s); 

	return 0; 
} 

