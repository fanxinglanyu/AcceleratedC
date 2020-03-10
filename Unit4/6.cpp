#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade1.h"//grade函数重载声明
#include "Student_info1.h"//与Student_info结构和相关的函数组装起来

using std::cin;             using std::setprecision;
using std::cout;            using std::sort;
using std::domain_error;    using std::streamsize;
using std::string;          using std::vector;
using std::max;             using std::endl;
using std::istream;

//按照字母顺序排列学生
bool compare(const Student_info& x, const Student_info& y){
    return x.name < y.name;
}

//求中位数
double median(vector<double> vec){
    typedef vector<double>::size_type vec_sz;

    vec_sz  size = vec.size();
    if(size == 0)
        throw domain_error ("median of an empty vector");

    sort(vec.begin(), vec.end());

    vec_sz  mid = size/2;

    return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}

//对Stundet_info类型的对象进行处理
double grade(const Student_info& s){
    return s.score;
}//grade1


//根据期中、期末以及保存家庭作业的向量来计算学生的总成绩
double grade(double midterm, double final, const vector<double>& hw){
    if(hw.size() == 0)
        throw  domain_error("student has done no homework");
    return grade(midterm, final, median(hw));//如果家庭作业非空，则调用grade3
}//grade2

//根据期中、期末、平时成绩计算总成绩
double  grade(double midterm, double final, double homework){
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}//garde3

//读入学生姓名、期中、期末成绩、家庭作业成绩
istream& read(istream& is, Student_info& s){
    double midterm,final;
    is >> s.name >> midterm >> final;
    //如果输入的期中、期末成绩不是数字，则会把输入流标记为失败状态

    vector<double> homework;
    read_hw(is, homework);//读入家庭作业

    if(cin){
         s.score = grade(midterm, final, homework);
    }

    return is;
}

//从输入流中将家庭作业的成绩读入到一个vector<double>中
istream& read_hw(istream& in, vector<double>& hw){
    if(in){//当前学生的姓名、期中期末成绩非法时（输入流标记为失败状态），不会读入家庭作业
        //清除原先内容
        hw.clear();//清除之前可能存在的成绩，重新再次拥有空向量

        double x;
        while(in >> x){//输入的不是成绩时，库把输入流标记为失败状态
            hw.push_back(x);
        }
        //清除流使得输入动作对下个学生有效
        in.clear();//清除所有错误标记使得输入动作可以继续,并不清除下一个存储在输入流中的姓名
    }//如正常读完in，则返回in正确标记
    return in;
}


int main(){
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;//最长姓名的长度

    //读入并存储所有学生的数据
    while(read(cin,record)){//遇到非法输入，则结束输入，例如读入两个姓名
        //找出最长姓名的长度
       // maxlen = max(maxlen, record.name.size());
        maxlen =  max(record.name.size(),maxlen);
       students.push_back(record);
    }

    //按字母顺序排列学生记录
    sort(students.begin(), students.end(), compare);

    //输出学生姓名和成绩
    for (vector<Student_info>::size_type i = 0; i != students.size() ; ++i) {
        //输出姓名，将姓名填充值maxlen+1个字符的长度
        cout << students[i].name
            <<  string(maxlen + 1 - students[i].name.size(),' ');

        //计算并输出成绩
        try {
            double final_grade = grade(students[i]);//调用grade2
            streamsize pre = cout.precision();
            cout << setprecision(3) << final_grade
                << setprecision(pre);
        }catch (domain_error e){
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}
