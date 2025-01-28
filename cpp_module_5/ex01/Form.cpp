#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default Form"), _isSigned(false), _minGradeToSign(150), _minGradeToExecute(150) {
}

Form::~Form() {
}

Form::Form(std::string name): _name(name), _isSigned(false), _minGradeToSign(150),_minGradeToExecute(150) {
}

Form::Form(std::string name, int reqGtoSign, int reqGtoExec) : _name(name), _isSigned(false), _minGradeToSign(reqGtoSign), _minGradeToExecute(reqGtoExec) {
    if (reqGtoExec < 1 || reqGtoSign < 1)
        throw GradeTooHighException();
    else if (reqGtoExec > 150 || reqGtoSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy.getName()), _minGradeToSign(getGradeToSign()), _minGradeToExecute(getGradeToExec()) {
    *this = copy;
}

Form &Form::operator=(const Form& copy) {
    if (this == &copy)
        return *this;
    _isSigned = copy._isSigned;
    return *this;
}

std::string Form::getName() const {
    return _name;
}

size_t Form::getGradeToSign() const {
    return _minGradeToSign;
}

size_t Form::getGradeToExec() const {
    return _minGradeToExecute;
}

std::string Form::getIsSigned(  ) const {
    if (_isSigned == false)
        return "false";
    return "true";
}

void Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() <= this->getGradeToSign())
        this->_isSigned = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form: Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form: Grade Too Low";
}

std::ostream &operator<<(std::ostream& o, Form& f) { 
    o << f.getName() << ", requried grade to sign " << f.getGradeToSign()
    << ", required grade to execute " <<f.getGradeToExec() << ", is signed " <<  f.getIsSigned() << std::endl;
    return o;
}

