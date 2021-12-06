#ifndef LAB19_H
#define LAB19_H

void print_str(const char str[], std::string prefix, const int n, const int lenght) {
	if (lenght == 1) {
		for (int j = 0; j < n; j++)
			std::cout << prefix + str[j] << std::endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
			print_str(str, prefix + str[i], n, lenght - 1);
	}
}

#endif
