#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iostream>

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const size_t _minGradeToSign;
        const size_t _minGradeToExecute;
    public:
        Form();
        Form(std::string name);
        Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        ~Form();
        Form(const Form& copy);
        Form &operator=(const Form& copy);
        std::string getName() const;
        size_t getGradeToSign() const;
        size_t getGradeToExec() const;
        std::string getIsSigned() const;
        void beSigned(Bureaucrat& b);
        class GradeTooHighException: public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception {
            const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream& o, Form& f);

#endif