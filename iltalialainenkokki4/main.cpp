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
    int flourAmount;
    int waterAmount;

    ItalianChef(const std::string& name, int flour, int water)
        : Chef(name), flourAmount(flour), waterAmount(water) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << getName() << " makes pasta with special recipe" << std::endl;
        std::cout << "Chef " << getName() << " uses jauhot = " << flourAmount << std::endl;
        std::cout << "Chef " << getName() << " uses vesi = " << waterAmount << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Chef " << getName() << " destruktori" << std::endl;
    }
};

int main() {
    ItalianChef italianChef1("Mario", 250, 100);

    italianChef1.makePasta();

    return 0;
}
