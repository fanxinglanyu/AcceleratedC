
#ifndef ACM_GRADE_H
#define ACM_GRADE_H

#include<vector>
#include"Student_info.h"
double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif
