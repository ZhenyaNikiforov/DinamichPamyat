/*-- Zadanie 3.
Tablicza umnozheniya.
Kodirovka fajla - cp 866. --*/

#include <iostream>
#include "main.h"
using namespace std;

int main()
{
    int rows = 0;
    int columns = 0;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;
    cout << "Таблица умножения: \n";

    int **mulTable = create_two_dim_array(rows, columns);

    fill_two_dim_array(mulTable, rows, columns);
    print_two_dim_array(mulTable, rows, columns);
    delete_two_dim_array(mulTable, rows);

    return 0;
}