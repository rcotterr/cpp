#include <iostream>
#include <string>
#include <algorithm>

template <typename T>
bool easyfind(T container, int n) {
    bool found = std::find(container.begin(), container.end(), n) != container.end();
    if (!found) {
        throw std::exception();
    }
    return found;
}
