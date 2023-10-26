#include <iostream>
int main() {
    int count = 0;
    int previous, current, next;
    std::cin >> previous;
    if (previous == 0) {
        std::cout << "Последовательность слишком короткая " << count << std::endl;
        return 2;
    }
    std::cin >> current;
    if (current == 0) {
        std::cout << "Последовательность слишком короткая " << count << std::endl;
        return 2;
    }
    while (true) {
        std::cin >> next;
        if (next == 0) {
            break; 
        }
        if (current < previous && current > next) {
            count++;
        }
        previous = current;
        current = next;
    }

    std::cout << "Количество элементов, которые меньше предыдущего элемента, но больше следующего: " << count << std::endl;

    return 1;
}