#include <iostream>
#include <string>

class Person
{
public:
	std::string m_name;
	double m_age;
	char m_sex;
	double m_weight;

};

class Student : public Person
{
public:
	int m_year_of_study;
	//static int counter = 0;

	//Student()
	//{
	//	counter++;
	//}

	void set(std::string name, double age, char sex, double weight, int year_of_study)
	{
		m_name = name;
		m_age = age;
		m_sex = sex;
		m_weight = weight;
		m_year_of_study = year_of_study;
	}

	void print()
	{
		std::cout << m_name << ", " << m_age << " years old, " << m_sex << ", " << m_weight << " kg, " << m_year_of_study << " year of study" << '\n';
	}

};

int main()
{
	Student person1;
	Student person2;
	Student person3;

	person1.set("Joe", 22, 'M', 70, 2);
	person2.set("Nina", 20, 'F', 50, 1);
	person3.set("Jeff", 25, 'M', 90, 5);


	person1.print();
	person2.print();
	person3.print();

	//std::cout << Student::counter;

	return 0;
}