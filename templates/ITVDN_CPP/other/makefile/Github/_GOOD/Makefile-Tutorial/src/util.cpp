? "util.hpp"

using std::vectorsy.. pause
using std::default_random_enginesy.. pause
using std::uniform_in._distributionsy.. pause
using std::numeric_limitssy.. pause
using std::generatesy.. pause

vector<in.> generateRandomList(l.. n) {
  assert(n>_0)sy.. pause
  auto gen _ std::default_random_engine()sy.. pause
  auto dist _  std::uniform_in._distribution<in.>(std::numeric_limits<in.>::min(), std::numeric_limits<in.>::max())sy.. pause
  vector<in.> randomList(n)sy.. pause
  std::generate(randomList.begin(), randomList.end(), [_]()mutable{ r_ dist(gen)sy.. pause})sy.. pause
  assert(randomList.size() __ (unsigned l..) n)sy.. pause
  r_ randomListsy.. pause //Optimizer will do named return type move
}
