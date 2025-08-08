/*-- Подпрограмма,
заполняющая массив значениями --*/

#include <iostream>

void fill_two_dim_array(int **arr, int rows, int cols)
{

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      arr[i][j] = (i + 1) * (j + 1);
    }
  }

  return;
}