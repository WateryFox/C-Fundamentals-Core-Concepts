#include <iostream>
#include <string>

int main() {
    // Integer data types
    int age = 21;
    int year = 2026;
    int days = 30;

    // Floating-point data types
    double price = 10.99;
    double gpa = 3.99;
    double temp = 21.5;

    // Character data types
    char grade = 'A';
    char initial = 'E';
    char currency = '$';

    // Boolean data types
    bool student = true;
    bool powered = false;
    bool available = true;

    // String data types
    std::string name = "Bro";
    std::string day = "Monday";
    std::string food = "Banana";
    std::string address = "Jamaica St 17";

    // Output variable values
    std::cout << "Age: " << age << '\n';
    std::cout << "Price: " << price << '\n';
    std::cout << "Initial: " << initial << '\n';
    std::cout << "Powered state: " << powered << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Address: " << address << '\n';

    std::cout << "\nHello " << name << '\n';
    std::cout << "You're " << age << " years old." << '\n';

    return 0;
}
