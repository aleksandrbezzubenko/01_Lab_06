// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"
#include "student.hpp"
void SortByName(std::vector<Student>& students)
{
    for (size_t i = students.size(); --i;) {
        for (size_t j = 0; j < i; ++j) {
            if (students[j].Name > students[j + 1].Name) {
                std::swap(students[j].Name, students[j + 1].Name);
            }
        }
    }
}
