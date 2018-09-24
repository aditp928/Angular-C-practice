#include<iostream>
using namespace std;

int how_many() {
  int cookies;

  cout << "How many cookies did you consume?" << '\n';
  cin >> cookies;

  return cookies;
}

double total_calories(int cookies) {
  double cookies_per_serving = 40 / 10;
  double calories_per_serving = 300;
  double total = cookies / cookies_per_serving * calories_per_serving;

  return total;
}

int main() {
  int cookies = how_many();
  double total = total_calories(cookies);

  cout << "You consumed " << total << " calories." << '\n';

  // Necessary to prevent warnings from some compilers.
  // I'm not keeping the program running in a paused state because I am running
  // it from a CLI, so letting it close is most convenient.
  return 0;
