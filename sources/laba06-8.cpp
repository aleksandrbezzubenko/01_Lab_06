#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
using namespace std;

void cons(set<int>& st, const int count)
{
    for (int i = 0; i < count; i++) {
        st.insert(rand() % 100);
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    set<int> mySet;

    cons(mySet, 10);

    cout << "Элементы множества: ";
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));

    int del = 0;
    cout << "\nКакой элемент удалить? ";
    cin >> del;

    cout << "Элемент " << *mySet.find(del) << " - удален!" << endl;
    mySet.erase(del);

    int add = 0;
    cout << "Какой элемент добавить? ";
    cin >> add;

    cout << "Новый элемент добавлен на место старого - " << *mySet.lower_bound(add) << endl;
    mySet.insert(add);

    cout << "Мы удалили элемент " << del << " и добавили " << add << ".\nВот что получилось: " << endl;
    copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));

    set<int> s1;
    cons(s1, 10);
    set<int> s2;
    cons(s2, 10);
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
