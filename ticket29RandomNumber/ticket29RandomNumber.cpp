/*
#include <random>

using namespace std;

int main()
{
    double a, b, y;

    cout << "Введите изначальное значение\n"; // Вводим исходные данные
    cin >> a;
    cout << "Введите конечное значение\n";
    cin >> b;
    int rand_value = a + b;
    if (a <= b) {      
        std::random_device random_device; // Источник энтропии.
        std::mt19937 generator(rand_value); // Генератор случайных чисел.
        // (Здесь берется одно инициализирующее значение, можно брать больше)

        std::uniform_int_distribution<> distribution(a, b); // Равномерное распределение [a, b]

        int x = distribution(generator); // Случайное число.
        std::cout << x << "Ответ\n";  
    }
    if (a >= b) {

        std::random_device random_device; // Источник энтропии.
        std::mt19937 generator(rand_value); // Генератор случайных чисел.
        // (Здесь берется одно инициализирующее значение, можно брать больше)

        std::uniform_int_distribution<> distribution(b, a); // Равномерное распределение [b, a]

        int x = distribution(generator); // Случайное число.
        std::cout << x << "Ответ\n";
    }  
    return main();
}
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int LEN = 3;

int main()
{
    int sum;
    int arr[LEN];


    cout << "enter a and b: " << endl;
    cin >> arr[0];
    cin >> arr[1];
    sum = arr[0] + arr[1];

    arr[2] = rand() % sum;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}