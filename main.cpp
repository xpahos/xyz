#include <iostream>
#include "src/hash/hash.h"

using namespace std;

int main() {
    std::shared_ptr<TMD5Sum> hashCls = new TMD5Sum();

    cout << "Hello, World!" << endl;
    return 0;
}