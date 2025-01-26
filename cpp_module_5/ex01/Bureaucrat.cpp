#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): _name("default"), _grade(150){
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name): _name(name), _grade(150){
    std::cout << "name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, size_t grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()){
    //
    this->_grade = other._grade;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    //
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

size_t Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

void Bureaucrat::signForm(Form& f) {
    try {
        f.beSigned(*this); // Bürokrat formu imzalamaya çalışır.
        std::cout << BLUE << _name << " signed " << f.getName() << RESET << std::endl;
    } catch (std::exception& e) {
        // Bürokrat imzalayamazsa hata mesajı kırmızı yazdırılır.
        std::cout << RED << _name << " couldn't sign " << f.getName()
                  << " because " << e.what() << RESET << std::endl;
    }
}
