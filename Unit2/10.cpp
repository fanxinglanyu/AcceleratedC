//10
#include<iostream>

int main(int argc, char const *argv[])
{
	int k = 0;
	while(k != 10){//连续输出10个*，然后换行
		using std::cout;//将cout定义为std::cout的代替名
		cout << "*";
		++k;
	}
	std::cout << std::endl; //标准库中的名称
	return 0;
}
