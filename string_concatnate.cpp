#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

   
    ~String() {
        delete[] str;
    }

    
    String operator+(const String& other) const {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return String(newStr);
    }

    
    friend std::ostream& operator<<(std::ostream& os, const String& s) {
        os << s.str;
        return os;
    }
};

int main() {
    String s1("Hello, ");
    String s2("World!");

    String s3 = s1 + s2;

    std::cout << "Concatenated string: " << s3 << std::endl;

    return 0;
}

