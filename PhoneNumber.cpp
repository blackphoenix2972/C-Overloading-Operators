#include "PhoneNumber.h"

std::ostream& operator<<(std::ostream& output, const PhoneNumber& number)
{
	// Think of output as cout
	return output << "(" << number.AreaCode << ")" << " " << number.exchange << " " << number.line << "\n" << std::endl;
}

std::istream& operator>>(std::istream& input, PhoneNumber& number)
{
	std::cout << "Area Code: ";
	input >> number.AreaCode;
	std::cout << "Exchange: ";
	input >> number.exchange;
	std::cout << "Line: ";
	input >> number.line;
	return input;
}

int main() {

	PhoneNumber phone;
	operator>>(std::cin, phone);
	operator<<(std::cout, phone);
	return 0;

}
