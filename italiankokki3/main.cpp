#include <iostream>
#include <string>

class Chef {
public:

    Chef(const std::string& name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }


    std::string getName() const {
        return name;
    }


    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

private:
    std::string name;
};

class ItalianChef : public Chef {
public:

    ItalianChef(const std::string& name) : Chef(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << getName() << " makes pasta" << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Chef " << getName() << " destruktori" << std::endl;
    }
};

int main() {

    Chef chef1("Jyrki");

    ItalianChef italianChef1("Mario");

    chef1.makeSalad();
    chef1.makeSoup();

    italianChef1.makePasta();

    return 0;
}
