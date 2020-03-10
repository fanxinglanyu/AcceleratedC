#include <iostream>

double *f()
{
    static double value[] = {1,2,3,4,5};
    return value;
}

int main(int argc, char const *argv[])
{
  int n = 2;
  double d = f() [n];//返回指向double类型value数组的指针
  std::cout << "d = " << d << '\n';
  return 0;
}
