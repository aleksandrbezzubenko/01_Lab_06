// Copyright 2018 Your Name <your_email>
#include <iostream>
#include <vector>
#include "header.hpp"
#include "student.hpp"
void SortByRating(std::vector<Student>& rating)
{
    for (int i = rating.size(); --i;) {
        for (int j = 0; j < i; ++j) {
            float sum1 = 0;
            float sum2 = 0;
            int l = 0;
            int m = 0;
            if ((rating[j].Ratings).size() == 0) {
                sum1 = 0;
                l = 0;
            }
            for (unsigned k = 0;  k < (rating[j].Ratings).size(); ++k) {
                ++l;
                sum1  += rating[j].Ratings[k];
            }
            if ((rating[j + 1].Ratings).size() == 0) {
                sum2 = 0;
                m = 0;
            }
            for (unsigned n = 0; n < (rating[j + 1].Ratings).size(); ++n) {
                ++m;
                sum2 += rating[j + 1].Ratings[n];
            }
            float sr1 = sum1 / l;
            float sr2 = sum2 / m;
            if (sr1 > sr2) {
                std::swap(rating[j].Ratings, rating[j + 1].Ratings);
            }
        }
    }
}
