//6
#include<iostream>
#include<iostream>
#include<string>
#include<iomanip>

using std::cin;  using std::string;
using std::cout;  using std::setprecision;
using std::endl;  using std::streamsize;

int main(int argc, char const *argv[])
{
  cout << "Please enter your first name:";
  string name;
  cin >> name;
  cout <<"Hello, " << name << "!" << endl;

  cout << "Please eneter your midterm and final grades:";
  double midterm ,final;
  cin >> midterm >> final;

  cout << "Enter all your homeword grades, "
          "followed by end-of-file";

  int count = 0;
  double sum =0;

  double x;

  while(cin >> x){
    count++;
    sum += x;
  }

  //自定义平均成绩除零时的运算
  double homegrade = (count > 0) ? sum / count : 0.0;

  streamsize prec = cout.precision();
  cout << "Your final grade is " << setprecision(3)
  << 0.2 * midterm + 0.4 * final + homegrade * 0.4
  << setprecision(prec) << endl;

  return 0;
}
