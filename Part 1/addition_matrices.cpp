#include <iostream>
#include <vector>


class Vector {
private:
    std::vector<int> elements;

public:
    
    Vector(const std::vector<int>& elems) : elements(elems) {}

    
    Vector operator+(const Vector& other) const {
        std::vector<int> result(elements.size());
        for (size_t i = 0; i < elements.size(); ++i) {
            result[i] = elements[i] + other.elements[i];
        }
        return Vector(result);
    }

    
    void print() const {
        for (int elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Vector v1({1, 2, 3, 4, 5});
    Vector v2({6, 7, 8, 9, 10});

    Vector v3 = v1 + v2;

    std::cout << "Result of vector addition: ";
    v3.print();

    return 0;
}

