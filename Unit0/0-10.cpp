0-10
#include<cstdio>
#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
	std::string s = "Hello world!";
	std::string::size_type size = s.size();//配套类型,尺寸单位类型
	for (int i = 0; i < size; ++i)
	{
		if(s[i] ==' ') std::cout << std::endl;
		else std::cout << s[i];
	}
	return 0;
}
