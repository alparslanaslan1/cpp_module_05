#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << "After increment: " << bob << std::endl;
		bob.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		Bureaucrat jim("Jim", 151);
		std::cout << jim << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Caught an exception while creating Jim: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat alice("Alice", 149);
		std::cout << alice << std::endl;
		alice.decrementGrade();
		std::cout << "After decrement: " << alice << std::endl;
		alice.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}

	return 0;
}
