#include <iostream>

template <typename T>
T sum(T a, T b)
{
	return (a + b);
};

class test_status
{
public:
	test_status(bool a, int b)
	{
		completed_or_not = a;
		mark = b;
	}
	bool completed_or_not;
	int mark;
};

int main()
{
	double Natalya;
	int Kioshima;
	int Jonh;
	int Bob;
	test_status Student1(true, 3);
	int a = 5; 
	int b = 6;
	float c = 2.00;
	float d = 5.69;
	std::cout << sum(a, b) << " " << sum(c, d) << std::endl;
	return 0;
}
