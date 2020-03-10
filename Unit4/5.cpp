#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::string;
using std::endl; using std::vector;
using std::cout; using std::istream;



istream& ReadWord(istream& is, vector<string>& wd, vector<int>& cnt){
    string s;
    while(cin >> s){
        bool found = false;
        for (vector<string>::size_type i = 0; i != wd.size() ; ++i)
        {
            if(s == wd[i]){
                found = true;
                ++cnt[i];
                break;
            }
        }

        if(found == false){
            wd.push_back(s);
            cnt.push_back(1);
        }
    }
    return is;
}

int main(int argc, char const *argv[])
{
    vector<string> word;
    vector<int> count;

    int wordCount = 0;
    ReadWord(cin, word, count);

    cout << "The word nums are " << word.size() << endl;

    for (vector<string>::size_type i = 0; i != word.size() ; ++i)
    {
        cout << word[i] << "   " 
              << count[i] << " times!" << endl;
    }
    

    return 0;
}
