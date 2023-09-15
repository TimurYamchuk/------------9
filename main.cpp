#include <iostream>
#include "Laptop.h"
using namespace std;

int Laptop = 0;

int main() {
    Laptop laptop1("My Laptop", "Silver", 2023, 1500.0);

    CPU cpu1("Intel", "i7", 500.0);
    SSD ssd1("Samsung", "EVO", 200.0);
    Vcard vcard1("NVIDIA", "GTX 1660", 300.0);
    RAM ram1("Kingston", "DDR4", 100.0);

    laptop1.SetCpu(cpu1);
    laptop1.SetSsd(ssd1);
    laptop1.SetVcard(vcard1);
    laptop1.SetRam(ram1);

    cout << "Laptop Details:" << endl;
    laptop1.Print();
    
    double total = laptop1.AllPrice();
    cout << "Total Price: " << total << endl;

    return 0;
}