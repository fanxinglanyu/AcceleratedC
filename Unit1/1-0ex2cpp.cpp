//0
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	std::cout << "Please enter your name:";
	
	std::string name;
	std::cin >> name;
	
	const std::string greeting = " Hello," + name + " !";
	const std::string space (greeting.size(),' ');
	const std::string secend = "*" + space + "*";
	const std::string first (secend.size(), '*');

	std::cout <<  std::endl;
	std::cout << first << std::endl;
	std::cout << "*" << space << "*" << std::endl;
	std::cout << "*" << greeting << "*" << std::endl;
	std::cout << "*" << space << "*" <<	std::endl;
	std::cout << first << std::endl;

	return 0;
}
