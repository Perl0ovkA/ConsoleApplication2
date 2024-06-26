#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter first word: ";
    std::string first;
    std::cin >> first;
    

    std::cout << "The word: " << first << "\n" << "Number of letters: " << first.length() << "\n" <<
       "The first letter: " << first.front() << "\n" << "The last letter: " << first.back() << "\n";

    std::cin;
    return 0;
}
