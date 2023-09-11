#include <iostream>
#include <cmath>

int main()
{
	const double pi = atan(1) * 4;
	double L;
	std::cout << "L = ";
	std::cin >> L;
	double R = L / (2*pi);
	double S = pi * pow(R, 2);
	std::cout << "R = " << R << "; S = " << S << std::endl;
}