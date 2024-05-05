#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0; // Абстрактный метод
};

class Mammal : public virtual Animal
{
public:
	Mammal()
	{
		cout << "Mammal" << endl;
	}

	virtual void makeSound() override // Реализация чисто виртуальной функции
	{
		cout << "Mammal sound" << endl;
	}
};

class Bird : public virtual Animal
{
public:
	Bird()
	{
		cout << "Bird" << endl;
	}

	virtual void makeSound() override // Реализация чисто виртуальной функции
	{
		cout << "Bird sound" << endl;
	}
};

class Reptile : private virtual Animal
{
public:
	Reptile()
	{
		cout << "Reptile" << endl;
	}

	virtual void makeSound() override // Реализация чисто виртуальной функции
	{
		cout << "Reptile sound" << endl;
	}
};

class Bat : public Bird, private Mammal
{
public:
	Bat()
	{
		cout << "Bat" << endl;
	}

	virtual void makeSound() override // Реализация чисто виртуальной функции
	{
		cout << "Bat sound" << endl;
	}
};

int main()
{
	// Создание объектов
	Mammal aa;
	Bird sas;
	Bat ee;
	Reptile ss;

	// Вызов метода makeSound() через указатель на базовый класс
	Animal* animals[] = { &aa, &sas, &ee };
	for (Animal* animal : animals)
	{
		animal->makeSound();
	}
}
