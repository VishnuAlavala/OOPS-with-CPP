#include <iostream>
class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    MyNumber operator+(const MyNumber& other) {
        MyNumber result(value + other.value);
        return result;
    }
    int getValue() const {
        return value;
    }
};
int main() {
    MyNumber num1(25);
    MyNumber num2(10);
    MyNumber sum = num1 + num2;
    std::cout << "Result: " << sum.getValue() << std::endl;
    return 0;
}
