#include <iostream>
#include <math.h>
using namespace std;

//objective: find the minimum of the function fx = 2.1x^2 - 27.8x + 1 within x = 0 and x = 10

int main() {
  double x, fx, fmin, xmin;

  for (x = 0; x <= 10; x = x + 0.00001) {
    fx = 2.1*pow(x,2) - 27.8*x +1;

    //initialize minimum values for first iteration
    if (x == 0) {
      fmin = fx;
      xmin = x;
    }

    //check each new value against the determined minimum
    if (fx < fmin) {
      fmin = fx;
      xmin = x;
    }
  }

  cout << "the minimum is " << fmin << " at x = " << xmin << endl;

  return 0;
}