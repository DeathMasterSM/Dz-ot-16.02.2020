#include <iostream>

template <typename T>
T sum(T a, T b)
{
	return (a + b);
};

int main()
{
	int a = 5;
	int b = 6;
	float c = 2.00;
	float d = 5.69;
	std::cout << sum(a, b) << " " << sum(c, d) << std::endl;
	return 0;
}