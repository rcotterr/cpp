#include <iostream>
#include <string>
#include <vector>
#include "mutantstack.hpp"
#include "mutantstack.cpp"


int main()
{

    std::cout << "***check Subject***" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "***end of check Subject***" << std::endl;
    std::cout << std::endl;

    MutantStack<int> mstack_copy(mstack);
    std::cout << "size mstack_copy: " << mstack_copy.size() << std::endl;
    std::cout << "top: " << mstack_copy.top() << std::endl;
    mstack_copy.pop();
    std::cout << "top: " << mstack_copy.top() << std::endl;
    mstack_copy.pop();
    std::cout << "top: " << mstack_copy.top() << std::endl;
    mstack_copy.pop();
    std::cout << "top: " << mstack_copy.top() << std::endl;
    mstack_copy.pop();
    std::cout << "top: " << mstack_copy.top() << std::endl;


    MutantStack<int> mstack_equal = mstack;
    std::cout << "size mstack_equal: " << mstack_equal.size() << std::endl;
    return 0;
}