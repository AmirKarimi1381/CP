#include <iostream>
using namespace std;

int main() {

  int salary;
  cout << "Enter the salary: ";
  cin >> salary;
  int taxPercentage;
  if (salary >= 25000000)
    taxPercentage = 35;
  else if(salary >= 18000000)
    taxPercentage = 25;
  else if(salary >= 14000000)
    taxPercentage = 20;
  else if(salary >= 10000000)
    taxPercentage = 15;
  else if(salary >= 8000000)
    taxPercentage = 10;
  else if(salary >= 6000000)
    taxPercentage = 5;
  else taxPercentage = 0;

  int salaryAfterTask = (salary*(100-taxPercentage))/100;
  cout << "Salary after tax: \n" << salaryAfterTask;
	
	return 0;
}
