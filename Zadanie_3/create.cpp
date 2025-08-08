/*-- Подпрограмма,
создающая двумерный массив. --*/

#include <iostream>

int **create_two_dim_array(int rows, int cols)
{
  int **mulTable = new int *[rows];

  for (int i = 0; i < rows; i++)
  {
    mulTable[i] = new int[cols]();
  }

  return mulTable;
}