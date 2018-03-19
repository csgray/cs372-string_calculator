#include <string>
#include <sstream>

int add(std::string numbers) {
	if (numbers == "")
		return 0;

	int number; 
	std::istringstream stream(numbers);
	stream >> number;
	return number;
}
