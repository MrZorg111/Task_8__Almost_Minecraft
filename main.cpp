#include <iostream>

int main() {
    int n, c = 1;
    int landscape[5][5][10];
    int slice[5][5];
    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < 5; l++) {
            for (int j = 0; j < 10; j++) {
                std::cout << "Please fill in " << c << " column of our world: \n";
                std::cin >> n;
                landscape[i][l][j] = n;
            } c++;
        }
    }
    int s;
    std::cout << "Enter the slice level from 0 to 9: \n";
    std::cin >> s;
    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < 5; l++) {
                std::cout << landscape[l][i][s] << " ";
        }
        std::cout << std::endl;
    }

}
