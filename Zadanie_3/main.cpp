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
    cout << "������ ������⢮ ��ப: ";
    cin >> rows;
    cout << "������ ������⢮ �⮫�殢: ";
    cin >> columns;
    cout << "������ 㬭������: \n";

    int **mulTable = create_two_dim_array(rows, columns);

    fill_two_dim_array(mulTable, rows, columns);
    print_two_dim_array(mulTable, rows, columns);
    delete_two_dim_array(mulTable, rows);

    return 0;
}