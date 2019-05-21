// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include "header.hpp"
#include "student.hpp"
size_t CountExcellent(const std::vector<Student>& students5)
{
    size_t n = 0;
    for (unsigned i = 0; i < students5.size(); ++i) {
        int l = 0;
        for (unsigned j = 0; j < students5[i].Ratings.size(); ++j) {
            if (students5[i].Ratings[j] == 5) {
                ++l;
            }
        }
        if (l == students5[i].Ratings.size()) {
            ++n;
        }
    }
    return n;
}
