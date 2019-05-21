// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"
#include "student.hpp"
std::vector<std::string> GroupsId(const std::vector<Student>& group)
{
    std::vector<std::string> groupID;
        for (size_t i = 0; i < group.size(); ++i) {
            int l = 0;
            for (size_t j = 0; j < groupID.size(); ++j) {
                if (groupID[j] == group[i].GroupId) {
                    ++l;
                }
            }
            if (l == 0) {
                groupID.push_back(group[i].GroupId);
            }
        }
    return groupID;
}
