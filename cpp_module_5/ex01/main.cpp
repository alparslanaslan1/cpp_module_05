#include "Bureaucrat.hpp"
#include "Form.hpp"



int main()
{
    try {
        // Bürokrat oluşturma
        Bureaucrat taylor("Taylor", 20);
        std::cout << BLUE << "Created Bureaucrat: " << taylor.getName() << " with grade " << taylor.getGrade() << RESET << std::endl;

        // Form oluşturma
        Form militaryForm("Military Form", 30, 21);
        std::cout << BLUE << "Created Form: " << militaryForm << RESET;

        // Formu imzalamayı deneme
        taylor.signForm(militaryForm);
        std::cout << BLUE << "Form status after signing attempt: " << militaryForm << RESET;
    } catch (std::exception &e) {
        // Hata mesajını kırmızı yazdır
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;

    try {
        // Bürokrat oluşturma
        Bureaucrat brad("Brad", 40);
        std::cout << BLUE << "Created Bureaucrat: " << brad.getName() 
                  << " with grade " << brad.getGrade() << RESET << std::endl;

        // Form oluşturma
        Form educationForm("Education Form", 40, 41);
        std::cout << BLUE << "Created Form: " << educationForm << RESET;

        // Formu imzalamayı deneme
        brad.signForm(educationForm);
        std::cout << BLUE << "Form status after signing attempt: " << educationForm << RESET;
    } catch (std::exception &e) {
        // Hata mesajını kırmızı yazdır
        std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }

    return 0;
}
