#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Задание 1\n\n";
    int one, two, three;
    int count = 0;
    int numbers = 999;

    for (int i = 100; i < numbers; i++) {
        one = i % 10;
        two = (i / 10) % 10;
        three = i / 100;
        if (one == two && one != three && two != three) {
            count++;
        }
        if (one != two && one == three && two != three) {
            count++;
        }
        if (one != two && one != three && two == three) {
            count++;
        }
    }
    cout << "Счёт: " << count;
    //one = 123 % 10;
    //two = (123 / 10) % 10;
    //three = 123 / 100;
    //cout << one << " " << two << " " << three; // 3 2 1


    cout << "\n\n\nЗадание 2\n\n";
    count = 0;
    for (int i = 100; i < numbers; i++) {
        one = i % 10;
        two = (i / 10) % 10;
        three = i / 100;
        if (one != two && one != three && two != three) {
            count++;
        }
    }
    cout << "Счёт: " << count;


    cout << "\n\n\nЗадание 3\n\n";
    int n = 238;
    cout << "Введите число:\n";
    cin >> n;
    int c,b;
    int j = 0;
    b = 0;
    while (n > 0) {
    c = n % 10;
        if (c != 3 && c != 6) {
            b = b + c * pow(10, j);
            j++;
        }
        n = n / 10;

    }
    cout << "\nВ итоге: " << b;


    cout << "\n\n\nЗадание 4\n\n";
    int a1, b1;
    cout << "Введите число:\n";
    cin >> a1;
    for (int i = a1 - 1; i > 1; i--) {
        b1 = i;
        if ((a1 % (b1 * b1) == 0) && (a1 % (b1 * b1 * b1) != 0)) {
            cout << b1 << "\n";
        }
    }


    cout << "\n\n\nЗадание 5\n\n";
    int A;
    cout << "Введите число:\n";
    cin >> A;
    A = A * A;
    cout << "Куб суммы цифр этого числа равен: " << A << "\n";


    cout << "\n\n\nЗадание 6\n\n";
    A = 0;
    cout << "Введите число:\n";
    cin >> A;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }


    cout << "\n\n\nЗадание 7\n\n";
    A = 0;
    int B = 0;
    cout << "Введите первое число:\n";
    cin >> A;
    cout << "Введите второе число:\n";
    cin >> B;
    int C = 0;
    if (A > B) {
        C = A;
    }
    else {
        C = B;
    }
    for (int i = 1; i <= C; i++) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
}
