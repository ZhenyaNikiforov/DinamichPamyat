/*-- Подпрограмма,
создающая массив.--*/

#include <iostream>

double *create_array(int size)
{
  return new double[size]();
}