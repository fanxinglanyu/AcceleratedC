// //9
#include<iostream>
using std::cin;
using std::cout;
int main(int argc, char const *argv[])
{

	cout << "Please enter two number:";
	double num1 ,num2;
	cin  >> num1 >> num2;

	if(num1 >= num2) 
		cout << num1;
	else 
		cout << num2; 	
	
	cout << std::endl;

	return 0;
}
