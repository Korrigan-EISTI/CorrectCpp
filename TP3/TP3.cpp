#include <iostream>
#include <string>
#include "Vector.h"

int main (int argc, char** argv)
{
	Vector<int> vec;
	vec.push_back(1); vec.push_back(3); vec.push_back(4); vec.push_back(5); vec.push_back(2); vec.push_back(8); vec.push_back(7); vec.push_back(10); vec.push_back(8); vec.push_back(4); vec.push_back(2);
	vec.push_back(1);
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << std::to_string(i) + " : " + std::to_string(vec[i]) << std::endl;
	}
	std::cout << "\n";
	vec.pop_back();
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << std::to_string(i) + " : " + std::to_string(vec[i]) << std::endl;
	}
	vec.clear();
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << std::to_string(i) + " : " + std::to_string(vec[i]) << std::endl;
	}
	std::cout << "\nFini\n";
}