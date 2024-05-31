//Оголошення статичного масиву

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

//Оголошення динамічного масиву

#include <iostream>

int main() {
    int* arr = new int[5];
    for(int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }
    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}

//Доступ до елементів масиву

int arr[5] = {1, 2, 3, 4, 5};
int first = arr[0];  // 1
int last = arr[4];   // 5

//Зміна елементів масиву

int arr[5] = {1, 2, 3, 4, 5};
arr[2] = 10;  // Тепер arr[2] = 10

//Виведення масиву на екран

int arr[5] = {1, 2, 3, 4, 5};
for(int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " ";
}
std::cout << std::endl;

//Ініціалізація значень у масиві

int arr[5];
for(int i = 0; i < 5; ++i) {
    arr[i] = i * 2;  // arr буде {0, 2, 4, 6, 8}
}

//Передача масиву у функцію

void printArray(int arr[], int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}

//Повернення масиву з функції

int* createArray(int size) {
    int* arr = new int[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int* arr = createArray(5);
    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}

//Оголошення та ініціалізація двовимірного масиву

#include <iostream>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

//Доступ до елементів двовимірного масиву

int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
int value = arr[1][2];  // 6

//Динамічний двовимірний масив

#include <iostream>

int main() {
    int rows = 2, cols = 3;
    int** arr = new int*[rows];
    for(int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    // Ініціалізація
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            arr[i][j] = i * cols + j + 1;
        }
    }

    // Виведення
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Звільнення пам'яті
    for(int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}