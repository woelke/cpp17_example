#include <iostream>
#include <vector>

#include "foo.hpp"

using namespace std;

int main() {
  vector<bool> xs;
  xs.emplace_back(true);
  cout << "hello world" << endl;
  foo f("hello world again");
  if (!xs.empty())
    if (auto x = xs[0]; x)
      f.print();
}
