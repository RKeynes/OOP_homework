#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	string m_company;
	string m_model;

	Car(string company, string model) : m_company(company), m_model(model)
	{
		cout << m_company << " " << m_model << endl;
	}

};

class PassengerCar : virtual public Car
{
public:
	PassengerCar(string company, string model) : Car(company, model)
	{ }
};

class Bus : virtual public Car
{
public:
	int m_number_of_seats = 0;
	Bus(string company, string model, int number_of_seats) : Car(company, model), m_number_of_seats(number_of_seats)
	{
		cout << m_number_of_seats << endl;
	}

};

class Minivan : public PassengerCar, public Bus
{
public:
	Minivan(string company, string model, int number_of_seats) : Car(company, model), PassengerCar(company, model), Bus(company, model, number_of_seats)
	{ }
};

int main()
{
	Car someCar("unknown", "car");
	PassengerCar passengerCar1("Chevrolet", "Camaro");
	Bus bus1("Mercedes-Benz", "Tourismo", 200);
	PassengerCar passengerCar2("Chevrolet", "Silverado");
	Minivan minivan1("Mercedes", "Sprinter-Classic", 50);

	return 0;
}