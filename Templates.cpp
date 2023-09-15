#include <iostream>

// Template class representing a pair of values
template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first_(first), second_(second) {}

    void print() {
        std::cout << "First: " << first_ << ", Second: " << second_ << std::endl;
    }

private:
    T1 first_;
    T2 second_;
};

int main() {
    Pair<int, double> pair1(5, 3.14);
    Pair<std::string, char> pair2("Hello", 'W');

    pair1.print();
    pair2.print();

    return 0;
}
