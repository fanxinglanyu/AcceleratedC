/*
出现为问题：
数字和数字的平方混在了一起
解决代码：
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::endl;    using std::setw;
using std::cout;    using std::cin;

int Get_Width(int max){
    return (log10(max) + 1) + 1;//返回数值的数位数 + 1，如1000的数位数是4,加一后变成5
}

int main(){

    int max;
    cin >> max;

    for (int i = 1; i != max; ++i)
    {
        cout << setw(Get_Width(max)) << i
                << setw(Get_Width(max * max)) << i * i <<endl; 
    }
    return 0;
}

