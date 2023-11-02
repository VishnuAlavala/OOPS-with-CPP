#include<iostream>
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);        
    double doubleResult = add(3.3, 2.5); 

    std::cout << "Integer result: " << intResult << std::endl;
    std::cout << "Double result: " << doubleResult << std::endl;

    return 0;
}
