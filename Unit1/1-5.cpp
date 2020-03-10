//5
/*
error: use of undeclared identifier 'x'
        std::cout <<  x << std::endl;
一个作用域结束后，x作为局部变量，已经被系统回收了
*/

#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	{
		std::string s = "a string";
			
		std::string x = s + ", really";
		std::cout << s << std::endl;
	
	std::cout <<  x << std::endl;
	}

	return 0;
}
