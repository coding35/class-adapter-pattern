#include <iostream>

class target {
public:
    void request() {
        std::cout << "target request" << std::endl;
    }
};

class adaptee {
public:
    void specificRequest() {
        std::cout << "Adaptee specificRequest" << std::endl;
    }
};

class adapter : public target, public adaptee {

};


int main() {
    adapter adapter;

    adapter.request();
    adapter.specificRequest();
    return 0;
}

