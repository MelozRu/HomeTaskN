#include <iostream>
#include "Time.h"

// Copyright 2020 podovinnikov

int main()

{ setlocale(LC_CTYPE, "Russian");
  Time T1, T2, T3;
  T1.getTime();
  T2.getTime();
  T3.addTime(T1, T2);
  T3.putTime();

  return 0;
}
