#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) 
    : AForm("Robotomy Request Form", 72, 45), _target("Default") {

    }

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : AForm("Robotomy Request Form", 72, 45), _target(target) {

    }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) 
    : AForm(copy) {
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
    if (this != &copy) {
        this->_target = copy._target;
    }
    return *this; 
}

void RobotomyRequestForm::executeAction(void) const {
    static bool seeded = false;
    if (!seeded) {
        std::srand(time(0));
        seeded = true;
    }

    std::cout << "*DRILLING NOISES*" << std::endl;
    
    if (std::rand() % 2 == 0) {
        std::cout << BLUE << _target << " has been robotomized successfully!" << RESET << std::endl;
    } else {
        std::cout << RED << "Robotomy of " << _target << " failed!" << RESET << std::endl;
    }       
}
