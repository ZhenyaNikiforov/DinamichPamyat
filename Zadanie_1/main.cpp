/*-- ������� 1.
����ணࠬ�� �������� ���ᨢ� � ���᮫�
� �⮡ࠦ���� ���. --*/

#include <iostream>

int main()
{
  int arraySize = 0; //-- ������ ���ᨢ�.

  std::cout << "������ ࠧ��� ���ᨢ�: ";
  std::cin >> arraySize; //-- ����� ���-�� ����⮢.

  int *integers = new int[arraySize](); //-- ������ ���ᨢ � ���ﬨ.
  int integersItem = 0;

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << "arr[" << i << "] = ";
    std::cin >> integersItem;
    integers[i] = integersItem;
  }

  std::cout << "������ ���ᨢ: ";

  for (int i = 0; i < arraySize; i++)
  {
    std::cout << integers[i] << " ";
  }

  delete[] integers;
  return 0;
}