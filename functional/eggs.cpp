#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class Egg {
public:
    Egg(int size) : size(size) {}

    int getSize() const {
        return size;
    }

private:
    int size;
};

class Chicken {
public:
    Chicken(std::initializer_list<Egg> eggs) : eggs(eggs) {}

    void forEachEgg(std::function<void(const Egg&)> action) const {
        std::for_each(eggs.begin(), eggs.end(), action);
    }

private:
    std::vector<Egg> eggs;
};

int main() {
    // Create a chicken with some eggs
    Chicken chicken{{Egg(1), Egg(2), Egg(3)}};

    // Print the size of each egg using a functional approach
    chicken.forEachEgg([](const Egg& egg) {
        std::cout << "Egg size: " << egg.getSize() << std::endl;
    });

    return 0;
}