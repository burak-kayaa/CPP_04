#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/WrongCat.hpp"

int main()
{
	int i = -1;
	Animal *animals[10];
	while (++i < 10)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	i = -1;
	while (++i < 10)
		animals[i]->makeSound();
	i = -1;
	while (++i < 10)
		delete animals[i];
	return (0);
}
