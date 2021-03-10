#include <iostream>
#include <string>

class Fruit
{
public:
	std::string m_name;
	std::string m_color;

    Fruit(std::string name, std::string color) : m_name(name), m_color(color)
    { }

    virtual std::string getName()
    {
        return m_name;
    }

    virtual std::string getColor()
    {
        return m_color;
    }

};

class Apple : public Fruit
{
public:
    
    Apple(std::string name, std::string color) : Fruit(name, color)
    {    }
   /* std::string getColor() override
    {
        return m_color;
    }*/
    
};

class Banana : public Fruit
{
public:

    Banana(std::string name, std::string color) : Fruit(name, color)
    {}
    std::string getColor() override
    {
        return m_color;
    }

};

class GrannySmith : public Apple
{
public:

    GrannySmith(std::string name, std::string color) : Apple(name, color)
    {}
    std::string getColor() override
    {
        return m_color;
    }

};

int main()
{
    Apple a("apple", "red");
    Banana b("banana", "yellow");
    GrannySmith c("Granny Smith apple", "green");

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}
