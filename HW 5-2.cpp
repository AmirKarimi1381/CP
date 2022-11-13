#include <iostream>
using namespace std;

int main() {
	char n;
	cout << "Pleas Enter Any Keyboard Character: ";
	cin >> n;
	
	switch (n){
	
    case 'a':
    	cout << "VOWEL";
        break;

    case 'e':
        cout << "VOWEL";
        break;
    
    case 'i':
        cout << "VOWEL";
        break;
        
    case 'o':
        cout << "VOWEL";
        break;
        
    case 'u':
        cout << "VOWEL";
        break;
        
	default:
        cout << "This Is Not VOWEL Character";
}
	return 0;
}