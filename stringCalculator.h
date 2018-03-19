#include <string>		// std::getline, std::string, std::stoi (converts strings to integers!)
#include <sstream>		// std::istringstream
#include <algorithm>	// std::replace

int add(std::string numbers) {
	int sum = 0;
	std::string token;
	
	std::replace(numbers.begin(), numbers.end(), '\n', ',');
	std::istringstream stream(numbers);

	while (std::getline(stream, token, ',')) {
		int number = std::stoi(token);
		if (number < 0)
			throw -1;
		if (number > 1000)
			continue;
		sum += number;
	}

	return sum;
}
