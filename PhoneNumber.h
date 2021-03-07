#pragma once
#include <iostream>

class PhoneNumber {
	friend std::ostream& operator<< (std::ostream&, const PhoneNumber&);
	friend std::istream& operator>> (std::istream&, PhoneNumber&);
private:
	std::string AreaCode;
	std::string exchange;
	std::string line;
};
