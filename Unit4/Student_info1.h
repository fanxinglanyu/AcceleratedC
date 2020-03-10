#ifndef ACM_Student_info
#define ACM_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info{
    std::string name;
//    double midterm, final;
//    std::vector<double> homework;
    double score;

};

bool compare(const Student_info&, const Student_info&);

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream& read(std::istream&, Student_info&);


#endif
