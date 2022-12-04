#include <iostream>
using namespace std;
int main() {
	int array[10];
	int i;
	float total = 0.0, average;
	
	for (i=0; i<10; i++){
		cout<<"Enter The Number: "<<(i+1) << " : ";
		cin >> array[i];
	}
	
	for (i=0; i<10; i++){
		total = total + array[i];
	}
	average = total / 10;
	
	cout<<"\n Sum Of All Numbers = "<<total<<"\n";
	cout<<"\n Average Of All Input Numbers = "<<average<<"\n";
}