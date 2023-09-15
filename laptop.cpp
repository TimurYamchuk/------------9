#include <iostream>
#include "Laptop.h"
using namespace std;

Laptop::Laptop()
{
    name = nullptr;
    color = nullptr;
    year = 0;
    price = 0.0;
    cpu = CPU(); // Инициализируем компоненты объектами по умолчанию
    ssd = SSD();
    vcard = Vcard();
    ram = RAM();
}

Laptop::Laptop(const Laptop& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    color = new char[strlen(obj.color) + 1];
    strcpy(color, obj.color);
    year = obj.year;
    price = obj.price;
    cpu = obj.cpu;
    ssd = obj.ssd;
    vcard = obj.vcard;
    ram = obj.ram;
}

Laptop::Laptop(const char* n, const char* c, int y, double pr)
    : year(y), price(pr)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}

void Laptop::Input()
{
    // Здесь можно реализовать метод ввода данных о ноутбуке
}

void Laptop::Print()
{
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "CPU: " << cpu.GetName() << " " << cpu.GetModel() << " " << cpu.GetPrice() << endl;
    cout << "SSD: " << ssd.GetName() << " " << ssd.GetModel() << " " << ssd.GetPrice() << endl;
    cout << "GPU: " << vcard.GetName() << " " << vcard.GetModel() << " " << vcard.GetPrice() << endl;
    cout << "RAM: " << ram.GetName() << " " << ram.GetModel() << " " << ram.GetPrice() << endl;
}

Laptop::~Laptop()
{
    delete[] name;
    delete[] color;
}

char* Laptop::GetName()
{
    return name;
}

int Laptop::GetYear()
{
    return year;
}

double Laptop::GetPrice()
{
    return price;
}

void Laptop::SetName(const char* n)
{
    if (name != nullptr)
        delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Laptop::SetYear(int y)
{
    year = y;
}

void Laptop::SetPrice(double pr)
{
    price = pr;
}

void Laptop::SetCpu(const CPU& c)
{
    cpu = c;
}

void Laptop::SetSsd(const SSD& s)
{
    ssd = s;
}

void Laptop::SetVcard(const Vcard& v)
{
    vcard = v;
}

void Laptop::SetRam(const RAM& r)
{
    ram = r;
}
double Laptop::AllPrice() const {
    double total = cpu.GetPrice() + ssd.GetPrice() + vcard.GetPrice() + ram.GetPrice();
    return total;
}

void Laptop::AllPrice() const
{
    cout << "Sum of components: " << cpu.GetPrice() + ssd.GetPrice() + gpu.GetPrice() + ram.GetPrice() << endl;
}
