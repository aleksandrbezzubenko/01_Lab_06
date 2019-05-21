// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"
#include "student.hpp"
#include "group.hpp"
std::vector<Group> Groups(const std::vector<Student>& studgroup)
{
    std::vector<Group> group;
    std::vector<std::string> groups = GroupsId(studgroup);
    for (size_t i = 0; i < groups.size(); ++i) {
        std::vector<Student> students;
        for (Student st : students) {
            if (groups[i] == st.GroupId) {
                students.push_back(st);
            }
        }
        group.push_back({ groups[i], students });
    }
    return group;
}
