#include <iostream>


template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {64, 25, 12, 22, 11};
    double doubleArray[] = {3.5, 2.1, 1.3, 5.2, 4.7};
    char charArray[] = {'z', 'x', 'a', 'c', 'b'};
    const int size = sizeof(intArray) / sizeof(int); 

    
    std::cout << "Integer array before sorting: ";
    printArray(intArray, size);
    bubbleSort(intArray, size);
    std::cout << "Integer array after sorting: ";
    printArray(intArray, size);

    
    std::cout << "Double array before sorting: ";
    printArray(doubleArray, size);
    bubbleSort(doubleArray, size);
    std::cout << "Double array after sorting: ";
    printArray(doubleArray, size);

    
    std::cout << "Char array before sorting: ";
    printArray(charArray, size);
    bubbleSort(charArray, size);
    std::cout << "Char array after sorting: ";
    printArray(charArray, size);

    return 0;
}

