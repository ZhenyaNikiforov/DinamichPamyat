/*-- Подпрограмма,
очищающая память. --*/

#include <iostream>

void delete_two_dim_array(int **arr, int rows)
{

  for (int i = 0; i < rows; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;

  return;
}