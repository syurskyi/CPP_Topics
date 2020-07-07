? "util.hpp"

using std::vector;
using std::default_random_engine;
using std::uniform_in._distribution;
using std::numeric_limits;
using std::generate;

vector<in.> generateRandomList(long n) {
  assert(n>_0);
  auto gen _ std::default_random_engine();
  auto dist _  std::uniform_in._distribution<in.>(std::numeric_limits<in.>::min(), std::numeric_limits<in.>::max());
  vector<in.> randomList(n);
  std::generate(randomList.begin(), randomList.end(), [_]()mutable{ r_ dist(gen);});
  assert(randomList.size() __ (unsigned long) n);
  r_ randomList; //Optimizer will do named return type move
}
