#include <iostream>
#include <cctype>

# define ERROR "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

std::string	string_upper(std::string string)
{
	int	i = 0;

	while (string[i]){
		string[i] = std::toupper(string[i]);
		i++;
	}
	return (string);
}

int main(int argc, char **argv)
{
	int 		i = 1;
	std::string	string;	

	if ((argc - 1) == 0){
		std::cout << ERROR << std::endl;
		return (0);
	}
	while (argv[i]){
		string = string_upper(argv[i]);
		std::cout << string;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
