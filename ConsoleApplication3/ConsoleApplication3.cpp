#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    const int n = 4;
    const int m = 4;
    int A[n][m], B[n][m];

    cout << "Введіть матрицю A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Введіть матрицю B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> B[i][j];
        }
    }

    for (int j = 0; j < m; j += 2) {
        for (int i = 0; i < n; ++i) {
            A[i][j] = B[j / 2][i];
        }
    }

    cout << "Результуюча матриця A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//3////////////////////////////////////////////

int main() {
    const int n = 4;
    const int m = 4;
    int A[n][m];

    cout << "Введіть матрицю A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    int minVal = 1000, maxVal = -1000;
    int minCount = 0, maxCount = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] < minVal) {
                minVal = A[i][j];
                minCount = 1;
            }
            else if (A[i][j] == minVal) {
                minCount++;
            }

            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxCount = 1;
            }
            else if (A[i][j] == maxVal) {
                maxCount++;
            }
        }
    }

    cout << "Мінімальне значення: " << minVal << ", кількість входжень: " << minCount << endl;
    cout << "Максимальне значення: " << maxVal << ", кількість входжень: " << maxCount << endl;

    return 0;
}

//4//////////////////////////////////////////////////////

int main() {
    const int n = 4, m = 4;
    int A[n][m];
    int minInColumns[m];

    cout << "Введіть елементи матриці A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        int minVal = 11;
        for (int i = 0; i < n; ++i) {
            if (A[i][j] < minVal) {
                minVal = A[i][j];
            }
        }
        minInColumns[j] = minVal;
    }

    cout << "Мінімальні елементи кожного стовпця:\n";
    for (int j = 0; j < m; ++j) {
        cout << minInColumns[j] << " ";
    }
    cout << endl;

    return 0;
}

//5////////////////////////////////////////////////////////

int main() {
    int n, m;
    cout << "Введіть кількість рядків (n) та стовпців (m): ";
    cin >> n >> m;

    int A[n][m];

    cout << "Введіть елементи матриці A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m / 2; ++j) {
            swap(A[i][j], A[i][m - j - 1]);
        }
    }

    cout << "Матриця після обміну лівої і правої частини:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//6///////////////////////////////////////////////////////////////

int main() {
    int n, m;
    cout << "Введіть кількість рядків (n) та стовпців (m): ";
    cin >> n >> m;

    int A[n][m];
    cout << "Введіть елементи матриці A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    int minVal = 11, maxVal = -11;
    int minIndexI = -1, minIndexJ = -1;
    int maxIndexI = -1, maxIndexJ = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] < minVal) {
                minVal = A[i][j];
                minIndexI = i;
                minIndexJ = j;
            }
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxIndexI = i;
                maxIndexJ = j;
            }
        }
    }

    cout << "Мінімальний елемент: " << minVal << " на індексах (" << minIndexI + 1 << ", " << minIndexJ + 1 << ")\n";
    cout << "Максимальний елемент: " << maxVal << " на індексах (" << maxIndexI + 1 << ", " << maxIndexJ + 1 << ")\n";

    return 0;
}