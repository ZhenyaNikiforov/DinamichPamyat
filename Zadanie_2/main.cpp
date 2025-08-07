/*-- Задание 2.
Создаватель массивов. --*/

#include <iostream>
#include "createArray.h"

int main()
{
  int arraySize = 0;

  std::cout << "Введите размер массива: ";
  std::cin >> arraySize;

  double *nulls = create_array(arraySize);

  std::cout << "Массив: ";

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << nulls[i] << " ";
  }

  delete[] nulls;
  return 0;
}