#include <iostream>

bool	isNumber(std::string str)
{
	int	i;
	int	length;

	i = 0;
	length = str.length();
	while (i < length)
		if (!isdigit(str.at(i++)))
			break ;
	return (i == length);
}
