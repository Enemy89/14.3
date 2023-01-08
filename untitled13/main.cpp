#include <iostream>

int main() {
    int matrixOne[4][4];
    int matrixTwo[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "Enter the value of the matrix cell (the matrices are filled in parallel: "
                         "1 row-1 column of the first matrix, then 1 row-1 column "
                         "of the second matrix):"<<std::endl;
            std::cin >> matrixOne[i][j];
            std::cin >> matrixTwo[i][j];
            if (matrixOne[i][j] != matrixTwo[i][j]) {
                std::cout << "The matrices are not equal!";
                return 0;
            }
            else {
                std::cout<<"Good"<<std::endl;
                for (int x=0; x<4; ++x) {
                    for (int y=0; y<4; ++y) {
                        if (x!=y) {
                            matrixOne[x][y]=0;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrixOne[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
