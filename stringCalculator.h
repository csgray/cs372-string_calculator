#include <string>		// std::getline, std::string, std::stoi (converts strings to integers!)
#include <sstream>		// std::istringstream
#include <algorithm>	// std::replace

int add(std::string numbers) {
	int sum = 0;
	int number;
	std::string token;
	
	std::replace(numbers.begin(), numbers.end(), '\n', ',');
	std::istringstream stream(numbers);
	while (std::getline(stream, token, ','))
		sum += std::stoi(token);

	return sum;
}
