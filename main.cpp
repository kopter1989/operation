#include <iostream>
#include "tools.h"

int main() {
  double x_1, y_1, x_2, y_2;
  std::cout << "enter the coordinates of the start of the cut x_1 and y_1" << std::endl;
  std::cin >> x_1 >> y_1;
  std::cout << "enter the coordinates of the end of the cut x_2 and y_2" << std::endl;
  std::cin >> x_2 >> y_2;
  scalpel(x_1, y_1, x_2, y_2);
  std::cout << "enter the coordinate where you want to make the clamp x and y" << std::endl;
  std::cin >> x_1 >> y_1;
  hemostat(x_1, y_1);
  std::cout << "enter the coordinate where you want to make the clamp with tweezers x and y" << std::endl;
  std::cin >> x_1 >> y_1;
  tweezers(x_1, y_1);
  std::cout << "enter the coordinates where you want begin to sew x_1 and y_1" << std::endl;
  std::cin >> x_1 >> y_1;
  std::cout << "enter the coordinates where you want end to sew x_2 and y_2" << std::endl;
  std::cin >> x_2 >> y_2;
   suture(x_1, y_1, x_2, y_2);
   std::cout << "operation completed" <<std::endl;
   return 0;
}