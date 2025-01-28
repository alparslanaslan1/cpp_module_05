#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
    try {
        Bureaucrat wolf("Wolf", 20);
        std::cout << BLUE << "Bureaucrat created: \"" << wolf.getName() 
                  << "\" (Grade: " << wolf.getGrade() << ")." << RESET << std::endl;

        Form militaryForm(" Form", 20, 41);
        std::cout << BLUE << "Form created: \"" << militaryForm.getName() 
                  << "\" (Grade required to sign: " 
                  << militaryForm.getGradeToSign() << ", Grade required to execute: "
                  << militaryForm.getGradeToExec() << ")." << RESET << std::endl;

        wolf.signForm(militaryForm);
        std::cout << BLUE << "Form status: Signed = " 
                  << militaryForm.getIsSigned() << RESET << std::endl;

    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;

    try {
        Bureaucrat bear("Bear", 40);
        std::cout << BLUE << "Bureaucrat created: \"" << bear.getName() 
                  << "\" (Grade: " << bear.getGrade() << ")." << RESET << std::endl;

        Form educationForm("Education Form", 40, 41);
        std::cout << BLUE << "Form created: \"" << educationForm.getName() 
                  << "\" (Grade required to sign: " 
                  << educationForm.getGradeToSign() << ", Grade required to execute: "
                  << educationForm.getGradeToExec() << ")." << RESET << std::endl;

        bear.signForm(educationForm);
        std::cout << BLUE << "Form status: Signed = " 
                  << educationForm.getIsSigned() << RESET << std::endl;

    } catch (std::exception& e) {
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    return 0;
}

