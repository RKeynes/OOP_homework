#include <iostream>

class Figure
{
public:
	double m_result;

public:
	Figure()
	{ }

	virtual double area()
	{
		return m_result;
	}

};

class Circle : public Figure
{
public:
	double pi = 3.14;
	double m_R;

	Circle (double R) : m_R(R)
	{}

	double area() override
	{
		return m_result = pi*pow(m_R,2);
	}

	void print()
	{
		std::cout << "Circle area: " << m_result << std::endl;
	}

};

class Parallelogram : public Figure
{
public:
	double m_a; // - side of parallelogram
	double m_h; // - height of parallelogram


	Parallelogram (double a, double h) : m_a(a), m_h(h)
	{ }

	double area() override
	{
		return m_result = m_a * m_h;
	}

	void print()
	{
		std::cout << "Parallelogram area: " << m_result << std::endl;
	}

};

class Rectangle : public Parallelogram
{
public:
	Rectangle (double a, double h) : Parallelogram(a, h)
	{}

	void print()
	{
		std::cout << "Rectangle area: " << m_result << std::endl;
	}
};

class Square : public Figure
{
public:
	double m_a; // - side of a square

	Square (double a) : m_a(a)
	{
	}

	double area() override
	{
		return m_result = pow(m_a, 2);
	}

	void print()
	{
		std::cout << "Square area: " << m_result << std::endl;
	}
};

class Rhombus : public Parallelogram
{
public:
	Rhombus (double a, double h) : Parallelogram(a, h)
	{}


	void print()
	{
		std::cout << "Rombus area: " << m_result << std::endl;
	}

};

int main()
{
	Circle circle1(2);
	circle1.area();
	circle1.print();

	Parallelogram parallelogram1(3, 2);
	parallelogram1.area();
	parallelogram1.print();

	Rectangle rectangle1(5, 6);
	rectangle1.area();
	rectangle1.print();

	Square square1(5);
	square1.area();
	square1.print();

	Rhombus rhombus1(2, 1);
	rhombus1.area();
	rhombus1.print();

	return 0;
}
