//4 方法2
#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main(int argc, char const *argv[])
{
  cout << "Please enter word:";
  
  string s;
  string longestWord;
  string shortestWord;
  int longestNum = 0;
  int shortNum = INT_MAX;

  while(cin >> s){
    string::size_type length = s.size();
    if(longestNum <= length){
      longestNum = length;
      longestWord = s;
    }
    if(shortNum >= length){
      shortNum = length;
      shortestWord = s;
    }
  }

  cout << "The longestWord is " << longestWord <<" ,length is " << longestNum << endl;
  cout << "The shortestWord is " << shortestWord <<" ,length is " << shortNum << endl;
  return 0;
}
