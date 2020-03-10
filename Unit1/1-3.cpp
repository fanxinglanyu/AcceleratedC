//3
//有效，两个字符串字面量都能输出。
//原本字符串常量初始化后，是不能修改的，但是{}使得两个字符串常量处于不同的作用域中，互不影响。
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	}
	{
		cosnt std::string s = "another string"
		std::cout << s << std::endl;
	}
	return 0;
}
