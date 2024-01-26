#include <iostream>
#include <string>

class Chef {
public:
    Chef(const std::string& name) : name(name) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
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

private:
    std::string name;
};

int main() {
    Chef chef1("Gordon Ramsay");

    chef1.makeSalad();
    chef1.makeSoup();


    Chef chef2("Anthony Bourdain");

    chef2.makeSalad();
    chef2.makeSoup();

    return 0;
}
