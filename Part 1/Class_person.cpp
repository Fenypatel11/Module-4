#include <iostream>
#include <string>

class Person 
{
	private:
    std::string name;
    int age;
    std::string country;

	public:
    
    void setName(const std::string &name) 
	{
        this->name = name;
    }

    
    std::string getName() const 
	{
        return name;
    }

    
    void setAge(int age) 
	{
        this->age = age;
    }

    
    int getAge() const 
	{
        return age;
    }

    
    void setCountry(const std::string &country) 
	{
        this->country = country;
    }

    
    std::string getCountry() const 
	{
        return country;
    }
};

int main() 
{
    
    Person person;

    
    person.setName("Devarsh");
    person.setAge(20);
    person.setCountry("INDIA");

    
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}

