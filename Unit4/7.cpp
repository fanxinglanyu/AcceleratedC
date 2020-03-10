#include <iostream>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::vector;

int main(int argc, char const *argv[])
{
  vector<double> grade;

  double num;
  while(cin >> num){
    grade.push_back(num);
  } 
  double res = ((grade.size() % 2 == 0) ? ((grade[grade.size() / 2] + grade[(grade.size() -1) / 2]) / 2) 
                                  : grade[grade.size() / 2]) ;
  cout << res  << endl;

  return 0;
}
