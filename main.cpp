// Hassan Mubarka:
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>

int main()
{
  double num_of_days, cost_of_hotel, cost_of_meal, total_cost;
  std::string place;

  std::cout << "Welcome to the Business Trip Tracker!";

  std::cout << "What is the business trip location?";
  std::cin >> place;
  std::cout << "How many days will the trip take?";
  std::cin >> num_of_days;
  std::cout << "What is the total hotel expense?";
  std::cin >> cost_of_hotel;
  std::cout << "What is the total meal expense?";
  std::cin >> cost_of_meal;

total_cost = cost_of_hotel + cost_of_meal;

  std::cout << "Location" << std::setw(10) << "Days" << std::setw(15) << "Hotel" << std::setw(14) << "Meal" << std::setw(15) << "Total" << std::endl;
  std::cout << place << std::setw(12) << num_of_days << std::setw(9) << cost_of_hotel << std::setw(8) << cost_of_meal << std::setw(9) << total_cost << std::endl;

  return 0;
}
