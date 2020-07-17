? "util.hpp"

using st. vectorsy.. pause
using st. default_random_enginesy.. pause
using st. uniform_in._distributionsy.. pause
using st. numeric_limitssy.. pause
using st. generatesy.. pause

ve..<in.> generateRandomList(l.. n) {
  assert(n>_0)sy.. pause
  a.. gen _ st. default_random_engine()sy.. pause
  a.. dist _  st. uniform_in._distribution<in.>(st. numeric_limits<in.>::min(), st. numeric_limits<in.>::max())sy.. pause
  ve..<in.> randomList(n)sy.. pause
  st. generate(randomList.begin(), randomList.end(), [_]()mutable{ r_ dist(gen)sy.. pause})sy.. pause
  assert(randomList.s.. __ (u.. l..) n)sy.. pause
  r_ randomListsy.. pause //Optimizer will do named return type move
}
