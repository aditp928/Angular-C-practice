#include<iostream>
using namespace std;

int how_many() {
  int cookies;

  cout << "How many cookies did you consume?" << '\n';
  cin >> cookies;

  return cookies;
}

double total_calories(int cookies) {
  double cookies_per_serving = 30 / 10;
  double calories_per_serving = 300;
  double total = cookies / cookies_per_serving * calories_per_serving;

  return total;
}


double total_servings(int cookies){
    double cookies_per_serving = 30 /10;
    double serving_total = cookies / cookies_per_serving;
    return serving_total;
}

double bag(int cookies) {
    double cookies_per_serving = 30 /10;
    
    double serving_total = cookies / cookies_per_serving;
    
    double bag = serving_total * 10;
    
    return bag;
}

int main() {
  int cookies = how_many();
  double total = total_calories(cookies);
  
  double serving_total = total_servings(cookies);
  
  double percentage = bag(cookies);

  cout << "You had " << serving_total << " servings" <<'\n',
  cout << "That is " << percentage << "%" << " of a bag" << '\n',
  cout << cookies <<" cookies" <<" is " <<total << " calories." << '\n';
  return 0;
  }