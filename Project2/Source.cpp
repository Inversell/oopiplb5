#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0; // ����������� �����
};

class Mammal : public virtual Animal
{
public:
	Mammal()
	{
		cout << "Mammal" << endl;
	}

	virtual void makeSound() override // ���������� ����� ����������� �������
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

	virtual void makeSound() override // ���������� ����� ����������� �������
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

	virtual void makeSound() override // ���������� ����� ����������� �������
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

	virtual void makeSound() override // ���������� ����� ����������� �������
	{
		cout << "Bat sound" << endl;
	}
};

int main()
{
	// �������� ��������
	Mammal aa;
	Bird sas;
	Bat ee;
	Reptile ss;

	// ����� ������ makeSound() ����� ��������� �� ������� �����
	Animal* animals[] = { &aa, &sas, &ee };
	for (Animal* animal : animals)
	{
		animal->makeSound();
	}
}
