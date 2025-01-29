#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat b1("John", 150);
        Bureaucrat b2("Alice", 1);
        Bureaucrat b3("Bob", 150);

        Form f1("Contract", 45, 30);
        Form f2("Permission", 100, 80);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.signForm(f1);
        b2.signForm(f1);
        b3.signForm(f2);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.incrementGrade();
        b2.incrementGrade();
        b3.decrementGrade();

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

    } catch (std::exception& e) {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}
