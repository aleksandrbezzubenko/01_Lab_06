#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
using namespace std;

void cons(set<int>& st)
{
    for (int i = 0; i < 10; i++) {
        st.insert(rand() % 100);
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    set<int> mySet;

    cons(mySet);

    cout << "�������� ���������: ";
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));

    int del = 0;
    cout << "\n����� ������� �������? ";
    cin >> del;

    cout << "������� " << *mySet.find(del) << " - ������!" << endl;
    mySet.erase(del);

    int add = 0;
    cout << "����� ������� ��������? ";
    cin >> add;

    cout << "����� ������� �������� �� ����� ������� - " << *mySet.lower_bound(add) << endl;
    mySet.insert(add);

    cout << "�� ������� ������� " << del << " � �������� " << add << ".\n��� ��� ����������: " << endl;
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));

    set<int> s1;
    cons(s1);
    set<int> s2;
    cons(s2);
    std::vector<int> v_intersection;
    std::vector<int> v_union;
    std::vector<int> v_difference;

    set_intersection(s1.begin(), s1.end(),
        s2.begin(), s2.end(),
        std::back_inserter(v_intersection));

    std::set_union(s1.begin(), s1.end(),
        s2.begin(), s2.end(),
        std::back_inserter(v_union));

    std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
        std::inserter(v_difference, v_difference.begin()));

    mySet.clear();

    return 0;
}
