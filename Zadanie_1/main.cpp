/*-- Задание 1.
Подпрограмма введения массива с консоли
и отображения его. --*/

#include <iostream>

int main()
{
  int arraySize = 0; //-- Размер массива.

  std::cout << "Введите размер массива: ";
  std::cin >> arraySize; //-- Задаём кол-во элементов.

  int *integers = new int[arraySize](); //-- Делаем массив с нолями.
  int integersItem = 0;

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << "arr[" << i << "] = ";
    std::cin >> integersItem;
    integers[i] = integersItem;
  }

  std::cout << "Введённый массив: ";

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << integers[i] << " ";
  }

  delete[] integers;
  return 0;
}