//0
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{		
	std::cout << "Please enter your name:";

	std::string name;
	std::cin >> name;
	
	std::cout << "Hello, " << name << "!" << std::endl;
	
	return 0;
}
