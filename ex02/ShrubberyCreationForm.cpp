#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) 
    : AForm("Shrubbery Creation Form", 145, 137), _target("Default") {

    }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
    : AForm("Shrubbery Creation Form", 145, 137), _target(target) {

    }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
    : AForm(copy) {
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
    if (this != &copy) {
        this->_target = copy._target;
    }
    return *this; 
}

void ShrubberyCreationForm::executeAction(void) const {
    std::ofstream file((_target + "_shrubbery").c_str());

    if (!file) {
        std::cerr << "Error: Could not open file " << _target << "_shrubbery" << std::endl;
        return;
    }

    file << "                                                         .\n";
    file << "                                              .         ;  \n";
    file << "                 .              .              ;%     ;;   \n";
    file << "                   ,           ,                :;%  %;   \n";
    file << "                    :         ;                   :;%;'     .,   \n";
    file << "           ,.        %;     %;            ;        %;'    ,;\n";
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "                    `:%;.  :;bd%;          %;@%;'\n";
    file << "                      `@%:.  :;%.         ;@@%;'   \n";
    file << "                        `@%.  `;@%.      ;@@%;         \n";
    file << "                          `@%%. `@%%    ;@@%;        \n";
    file << "                            ;@%. :@%%  %@@%;       \n";
    file << "                              %@bd%%%bd%%:;     \n";
    file << "                                #@%%%%%:;;\n";
    file << "                                %@@%%%::;\n";
    file << "                                %@@@%(o);  . '         \n";
    file << "                                %@@@o%;:(.,'         \n";
    file << "                            `.. %@@@o%::;         \n";
    file << "                               `)@@@o%::;         \n";
    file << "                                %@@(o)::;        \n";
    file << "                               .%@@@@%::;         \n";
    file << "                               ;%@@@@%::;.          \n";
    file << "                              ;%@@@@%%:;;;. \n";
    file << "                          ...;%@@@@@%%:;;;;,..  \n";

    file.close();
    std::cout << "ASCII trees have been created in " << _target << "_shrubbery file!" << std::endl;
}

