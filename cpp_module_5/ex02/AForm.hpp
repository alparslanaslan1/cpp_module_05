#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const size_t _requiredGradeToSign;
        const size_t _requiredGradeToExecute;
    public:
        AForm();
        AForm(std::string name);
        AForm(std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);
        std::string getName() const;
        size_t getGradeToSign() const;
        size_t getGradeToExec() const;
        std::string getIsSigned() const;
        void beSigned(Bureaucrat& b);
        void execute(const Bureaucrat& executor) const;
        virtual void specificExecute(void) const = 0;
        class GradeTooHighException: public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            const char* what() const throw();
        };
        class FormNotSignedException: public std::exception {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, AForm& f);

#endif