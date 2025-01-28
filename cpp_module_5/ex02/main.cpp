#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"



int main() {
    try {
        // 1. Bureaucrat oluşturma
        Bureaucrat boss("Boss", 0); // En yüksek yetki seviyesi
        Bureaucrat junior("Junior", 150); // Daha düşük yetki seviyesi
        
        std::cout << boss << std::endl;
        std::cout << junior << std::endl;

        // 2. Farklı formlar oluşturma
        PresidentialPardonForm pardonForm("Alice");
        RobotomyRequestForm robotomyForm("Bob");
        ShrubberyCreationForm shrubberyForm("Garden");

        // 3. Formların durumu
        std::cout << pardonForm;
        std::cout << robotomyForm;
        std::cout << shrubberyForm;

        // 4. Junior'ın form imzalamaya çalışması (Başarısız)
        junior.signAForm(pardonForm); // Yetkisi yetersiz
        std::cout << pardonForm;

        // 5. Boss'un formu imzalaması
        boss.signAForm(pardonForm);
        std::cout << pardonForm;

        // 6. Junior'ın formu çalıştırmaya çalışması (Başarısız)
        junior.executeForm(pardonForm);

        // 7. Boss'un formu çalıştırması
        boss.executeForm(pardonForm);

        // 8. Robotomy formu imzalama ve çalıştırma
        boss.signAForm(robotomyForm);
        boss.executeForm(robotomyForm);

        // 9. Shrubbery formu imzalama ve çalıştırma
        boss.signAForm(shrubberyForm);
        boss.executeForm(shrubberyForm);

        std::cout << "Program başarıyla çalıştı!" << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Bir hata oluştu: " << e.what() << std::endl;
    }

    return 0;
}
