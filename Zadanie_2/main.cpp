/*-- ������� 2.
�������⥫� ���ᨢ��. --*/

#include <iostream>
#include "createArray.h"

int main()
{
  int arraySize = 0;

  std::cout << "������ ࠧ��� ���ᨢ�: ";
  std::cin >> arraySize;

  double *nulls = create_array(arraySize);

  std::cout << "���ᨢ: ";

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << nulls[i] << " ";
  }

  delete[] nulls;
  return 0;
}