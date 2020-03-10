//0
#include<iostream>
#include<algorithm>
#include<string>
#include<ios>//streamsize
#include<iomanip>//setprecision
#include<vector>

using std::cout;       using std::cin;
using std::endl;       using std::sort;
using std::streamsize; using std::vector;
using std::setprecision;  using std::string;

int main(int argc, char const *argv[])
{
  cout << "Please enetr your name:";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout << "Please enter your midterm and final exam grades:";//其中期末成绩
  double midterm, final;
  cin >> midterm >> final;

  cout << "Please enter your homework grades,"//家庭作业成绩
          "followed by end-of-file:";
  vector<double> homework;
  double x;
  while(cin >> x){
    homework.push_back(x);
  }

  //检查homeword是否为空
  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();
  if(size == 0){
    cout << endl << "You must enetr your grades."
                  "Please try again." << endl;
    return 1;
  }

  //对成绩进行排序
  sort(homework.begin(), homework.end());

  //计算家庭作业成绩中值
  vec_sz mid = size / 2;
  double median;
  median = size % 2 == 0 ? (homework[mid] + homework[mid - 1])/2 
                          : homework[mid];

  //计算并输出总成绩
  streamsize prec = cout.precision();
  cout << "Your final grade is " << setprecision(3) 
        << 0.2 * midterm + 0.4 * final + 0.4 * median
        <<setprecision(prec) <<endl;

  return 0;
}  


