#include <iostream>

using namespace std;

int main() {
	int x,y,z;
	float ans;
	cout << "Enter x value:";
	cin >> x;
	
	cout << "\n Enter y value:";
	cin >> y;
	
	cout << "\n Enter z value:";
	cin >> z;
	
	ans = (x-y)*(x+z)/(x+y+z)*(x+y+z)+1;
	cout << ans;
	return 0;
}