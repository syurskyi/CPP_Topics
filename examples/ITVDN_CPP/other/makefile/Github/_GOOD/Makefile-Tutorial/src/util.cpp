#include "util.hpp"

using std::vector;
using std::default_random_engine;
using std::uniform_int_distribution;
using std::numeric_limits;
using std::generate;

vector<int> generateRandomList(long n) {
  assert(n>=0);
  auto gen = std::default_random_engine();
  auto dist =  std::uniform_int_distribution<int>(std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
  vector<int> randomList(n);
  std::generate(randomList.begin(), randomList.end(), [=]()mutable{ return dist(gen);});
  assert(randomList.size() == (unsigned long) n);
  return randomList; //Optimizer will do named return type move
}
