#ifndef PRESIDENTIALFORM_HPP
#define PRESIDENTIALFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
        void executeAction(void) const;

};


#endif