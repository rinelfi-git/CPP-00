#include <iostream>

bool	is_number(std::string str)
{
	int	i;
	int	length;

	i = 0;
	length = str.length();
	while (i < length) {
		if (!isdigit(str.at(i)))
			break ;
		i++;
	}
	return (i == length);
}

void    str_replace(std::string &src, const char *search, const char *replace)
{
	size_t	index;

	
	index = src.find(search);
	while (index < std::string::npos) {
		src.replace(index, std::string(search).length(), replace);
		index = src.find(search, index);
	}
}
