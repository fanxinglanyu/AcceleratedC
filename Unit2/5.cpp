//5
#include<iostream>
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
	int rows = 10;//行数，正方形的行数用列数表示
    int cols1 = rows * 2;//长方形的列数
	// for (int i = 0; i != rows; ++i)//正方形
	// {
	// 	string::size_type c = 0;
	// 	while(c != rows){
	// 		if(i ==  0 || i == rows - 1 || 
	// 				c == 0 || c == rows - 1){
	// 			cout << "*";
	// 		}else{
	// 			cout << " ";
	// 		}
	// 		c++;
	// 	}
	// 	cout << endl;
	// }

	// for (int i = 0; i != rows; ++i)//长方形
	// {
	// 	string::size_type c = 0;
	// 	while(c != cols1){
	// 		if(c == 0 || c == cols1 - 1 ||
	// 			i == 0 || i == rows - 1){
	// 			cout << "*";
	// 		}else{
	// 			cout << " ";
	// 		}
	// 		c++;
	// 	}
	// 	cout << endl;
	// }


/*输出三角形 
 *
***/
	for (int i = 0; i != rows; ++i)
	{
		int m = rows - (i + 1);
		while(m != 0){//输出空格，
				cout << " ";
				m--;
			}

		int j = 2 * (i + 1) - 1;
		while(j != 0){//输出*，1，3，5.。。。
			cout << "*";
			j--;
		}
		cout << endl;

	}
	return 0;
}
