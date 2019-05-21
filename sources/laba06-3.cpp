// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include "header.hpp"
#include "student.hpp"
size_t CountTwoness(const std::vector<Student>& students2)
{
    size_t n = 0;
    for (unsigned i = 0; i < students2.size(); ++i) {
        for (unsigned j = 0; j < students2[i].Ratings.size(); ++j) {
            if (students2[i].Ratings[j] == 2) {
                ++n;
                break;
            }
        }
    }
    return n;
}
