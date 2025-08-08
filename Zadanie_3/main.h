/*-- Сигнатуры подпрограмм
создания массива,
заполнения его,
выведения на консоль
и очистки памяти. --*/

#include <iostream>

#include "create.cpp"
#include "fill.cpp"
#include "print.cpp"
#include "delete.cpp"

int **create_two_dim_array(int rows, int cols);
void fill_two_dim_array(int **arr, int rows, int cols);
void print_two_dim_array(int **arr, int rows, int cols);
void delete_two_dim_array(int **arr, int rows);