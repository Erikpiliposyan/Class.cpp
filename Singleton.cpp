#include <iostream>

class Singleton {
private:
    int data;
    static Singleton* ptr;

    Singleton() : data(0) {}

public:
    static Singleton* getPtr() {
        if (!ptr) {
            ptr = new Singleton();
        }
        return ptr;
    }

    int get_data() const {
        return data;
    }

    void set_data(int value) {
        data = value;
    }
};

Singleton* Singleton::ptr = nullptr;

int main() {
    Singleton* singleton = Singleton::getPtr();

    singleton->set_data(42);

    std::cout << "Data: " << singleton->get_data() << std::endl;

    return 0;
}
