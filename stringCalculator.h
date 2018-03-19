#include <string>	// std::getline, std::string, std::stoi (converts strings to integers!)
#include <sstream>	// std::istringstream

int add(std::string numbers) {
	int sum = 0;
	int number;
	std::istringstream stream(numbers);
	std::string token;
	
	while (std::getline(stream, token, ','))
		sum += std::stoi(token);

	return sum;
}
