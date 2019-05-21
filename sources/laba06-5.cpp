// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"
#include "student.hpp"
std::vector<Student> VectorMathExcellent(const std::vector<Student>& studmath)
{
    std::vector<Student> math5 = {};
    for (int i = 0; i < studmath.size(); ++i) {
        int l = 0;
        for (int j = 0; j < studmath[i].Subjects.size(); ++j) {
            if (studmath[i].Subjects[j] == "Math") {
                l = j;
            }
        }
        if (studmath[i].Ratings[l] == 5) {
            math5.push_back(studmath[i]);
        }
    }
    return math5;
}
