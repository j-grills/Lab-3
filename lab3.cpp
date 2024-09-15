#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");
    if (!file.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    char ch;
    int count = 0;
    while (file.get(ch)) {
        if (ch == 'e' || ch == 'E') {
            count++;
        }
    }

    file.close();
    std::cout << "The letter 'e' or 'E' appears " << count << " times in the file." << std::endl;

    return 0;
}
