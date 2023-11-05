#include <iostream>
#include <exception>
#include "counterRr.hpp"

int main()
{
  std::cout << "enter score \n";
  Panov::CounterRr counterRr;
  try
  {
    std::cin.exceptions(std::istream::failbit);
    int value = 0;
    do
    {
      std::cin >> value;
      counterRr(value);
    } while (value != 0);
  }
    catch (const std::istream::failure& e)
    {
      std::cerr << "Only number pls\n";
      return 1;
    }
    catch (const std::logic_error& e)
    {
      std::cerr << e.what() << '\n';
      return 1;
    }
std::cout << counterRr() << '\n';
return 0;
}