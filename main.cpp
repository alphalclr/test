#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v_s;

	v_s.push_back("alan");
	v_s.push_back("thomas");
	v_s.push_back("james");

	for (auto &e : v_s) {
		printf("%s\n", e.c_str());
	}

	return 0;
}
