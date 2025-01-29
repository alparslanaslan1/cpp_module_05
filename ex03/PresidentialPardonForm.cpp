#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) 
    : AForm("Presidential Pardon Form", 25, 5), _target("Default") {
        
    }

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    : AForm("Presidential Pardon Form", 25, 5), _target(target) {

    }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) 
    : AForm(copy) {
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {
    if (this != &copy) {
        this->_target = copy._target;
    }
    return *this; 
}

void PresidentialPardonForm::executeAction(void) const {
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
