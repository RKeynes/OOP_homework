#include <iostream>
#include <cstdint>

// задание 1
class Power
{
public:
	double m_number1;
	double m_number2;

	void set(double number1, double number2)
	{
		m_number1 = number1;
		m_number2 = number2;
	};

	void calculate()
	{
		std::cout << pow(m_number1, m_number2) << '\n';
	}
};

// задание 2
class RGBA
{
private: // uint8_t воспринимался как char и выводил смайлики :)
	uint16_t m_red = 0;
	uint16_t m_green = 0;
	uint16_t m_blue = 0;
	uint16_t m_alpha = 255;

public:
	RGBA()           
	{

	}
	RGBA(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha)
		: m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{

	}
	void print()
	{
		std::cout << "Red: " << m_red << "; Green: " << m_green << "; Blue: " << m_blue << "; Alpha: " << m_alpha << '\n';
	}

};

// задание 3
class Stack
{
private:
	int m_array[10];

	void setValue(int index, int value)
	{
		if (index < 0 || index >= 10)
			return;

		m_array[index] = value;
	}
public:

	void reset() 
	{
		delete[] m_array;
	}

};

int main()
{
	// выведение задания 1
	Power numbers;
	numbers.set(2, 3);
	numbers.calculate();

	// выведение задания 2
	RGBA one;
	one.print();
	RGBA two(1, 1, 1, 256);
	two.print();


	return 0;
}