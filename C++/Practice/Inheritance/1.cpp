#include<iostream>
using namespace std;

class Cube {
public:
    int method(int val) {
        return val * val * val;
    }
};

int main() {
    Cube obj;
    int value = 5;
    int result = obj.method(value);
    cout << "The cube of " << value << " is: " << result << endl;
    
    return 0;
}

