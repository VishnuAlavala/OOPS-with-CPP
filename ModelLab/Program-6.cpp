#include <iostream>
class Animal {
protected:
    std::string name;
    std::string type;
public:
    Animal(std::string name, std::string type) {
        this->name = name;
        this->type = type;
    }
    std::string getName() const {
        return name;
    }
    std::string getType() const {
        return type;
    }
    virtual void makeSound() = 0; 
};
class Dog : public Animal {
public:
    Dog(std::string name) : Animal(name, "Dog") {}

    void makeSound() override {
        std::cout << "Woof woof!" << std::endl;
    }
};
class Cat : public Animal {
public:
    Cat(std::string name) : Animal(name, "Cat") {}

    void makeSound() override {
        std::cout << "Meow meow!" << std::endl;
    }
};
int main() {
    Dog dog("Spot");
    Cat cat("Whiskers");
    std::cout << dog.getName() << " (" << dog.getType() << "): ";
    dog.makeSound();
    std::cout << cat.getName() << " (" << cat.getType() << "): ";
    cat.makeSound();
    return 0;
}
