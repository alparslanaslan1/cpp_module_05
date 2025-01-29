#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main() {
    try {
        Bureaucrat boss("Boss", 1); 
        Bureaucrat junior("Junior", 150); 
        
        std::cout << boss << std::endl;
        std::cout << junior << std::endl;

        PresidentialPardonForm pardonForm("Alice");
        RobotomyRequestForm robotomyForm("Bob");
        ShrubberyCreationForm shrubberyForm("Garden");

        std::cout << pardonForm;
        std::cout << robotomyForm;
        std::cout << shrubberyForm;

        junior.signAForm(pardonForm); 
        std::cout << pardonForm;

        boss.signAForm(pardonForm);
        std::cout << pardonForm;

        junior.executeForm(pardonForm);
        boss.executeForm(pardonForm);

        boss.signAForm(robotomyForm);
        boss.executeForm(robotomyForm);

        boss.signAForm(shrubberyForm);
        boss.executeForm(shrubberyForm);

        std::cout  << BLUE << "The program successfully!" << RESET << std::endl;
        Bureaucrat deneme("ben", 0);
    } catch (std::exception& e) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }

    return 0;
}
