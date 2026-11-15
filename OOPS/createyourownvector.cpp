
#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;
    int sz;
    int cap;

public:
    // Constructor
    Vector() {
        sz = 0;
        cap = 1;
        arr = new int[cap];
    }

    // Add element
    void push_back(int val) {
        if (sz == cap) {
            cap *= 2;

            int* newArr = new int[cap];

            for (int i = 0; i < sz; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;
            arr = newArr;
        }

        arr[sz] = val;
        sz++;
    }

    // Remove last element
    void pop_back() {
        if (sz > 0) {
            sz--;
        }
    }

    // Get size
    int size() {
        return sz;
    }

    // Get capacity
    int capacity() {
        return cap;
    }

    // Access element
    int& operator[](int idx) {
        return arr[idx];
    }

    // Print vector
    void print() {
        for (int i = 0; i < sz; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Vector() {
        delete[] arr;
    }

    // Prevent accidental shallow copying
    Vector(const Vector&) = delete;
    Vector& operator=(const Vector&) = delete;
};

int main() {
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    v.print();

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.pop_back();

    v.print();

    cout << "Element at index 1: " << v[1] << endl;

    return 0;
}
     


