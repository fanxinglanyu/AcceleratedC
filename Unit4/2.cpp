#include <iostream>
#include <iomanip>

using std::endl;    using std::setw;
using std::cout;    using std::cin;

int main(){

    for (int i = 1; i != 101; ++i)
    {
        cout << setw(3) << i
                << setw(6) << i * i <<endl; 
    }
    return 0;
}
