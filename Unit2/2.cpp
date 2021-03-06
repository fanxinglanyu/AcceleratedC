//2
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(int argc, char const *argv[])
{
	cout << "Please enter your first name:";
	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";//构造将要输出的信息

	const int pad = 3;//空白行的个数
	const int rows = 3;
	const string::size_type cols = greeting.size() + 2;

	cout << endl;
	for (int r = 0; r != rows; ++r)
	{
		string::size_type  c = 0;//目前已经输出的行数
		while(c != cols){
			if(r == pad  && c == pad ){
				cout << greeting;
				c += greeting.size();
			}else{
				if(r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1) 
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
	return 0;
}
