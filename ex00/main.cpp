#include "Bureaucrat.hpp"


int main() {
    try {
        std::cout << "Creating bureaucrats..." << std::endl;
        
        Bureaucrat b1("John", 50);
        Bureaucrat b2("Alice", 1);
        Bureaucrat b3("Bob", 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        std::cout << "\nIncrementing and decrementing grades..." << std::endl;
        
        b1.incrementGrade();
        std::cout << "After increment: " << b1 << std::endl;

        b2.incrementGrade();
        std::cout << "After increment: " << b2 << std::endl;

    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

