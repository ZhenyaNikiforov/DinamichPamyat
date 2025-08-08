/*-- Подпрограмма,
печатающая массив на консоль. --*/

#include <iostream>
#include <iomanip>
using namespace std;

void print_two_dim_array(int **arr, int rows, int cols)
{

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << setw(5) << arr[i][j] << " ";
    }
    cout << endl;
  }

  return;
}