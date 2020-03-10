#include <iostream>
#include <iomanip>
#include <cmath>

using std::endl;    using std::setw;
using std::cout;    using std::cin;
using std::string;  using std::streamsize;
using std::setprecision;

#define N  5    //  保存有效位数
#define INCREASENUM 0.6 //增加的数字步数

int GetWidth(int max){
    return (log10(max) + 1);//返回数值的数位数，如1000的数位数是4
}

int GetSquareWidth(int max){
    //一个数的平方的位数 <= 这个数的位数 *2
    return (GetWidth(max) * 2);//返回平方数值的数位数，如1000的数位数是4
}

int main(){

    double max;
    cin >> max;
    
    // cout<< GetWidth(max) << " "
    //         << GetSquareWidth(max) << endl;

    streamsize pre;
    for (double i = 1.0; i < max; i += INCREASENUM)
    {
       pre = cout.precision();
        cout << setprecision(N) 
             << setw(GetWidth(max) + 1) << i
             << setw(GetSquareWidth(max) + 1) << i * i 
             <<endl; 
    }
    cout << setprecision(pre);
    return 0;
}
