? "util.hpp"

u.. st. vectorsy.. p..
u.. st. default_random_enginesy.. p..
u.. st. uniform_in._distributionsy.. p..
u.. st. numeric_limitssy.. p..
u.. st. generatesy.. p..

ve..<in.> generateRandomList(l.. n) {
  as..(n>_0)sy.. p..
  a.. gen _ st. default_random_engine()sy.. p..
  a.. dist _  st. uniform_in._distribution<in.>(st. numeric_limits<in.>::min(), st. numeric_limits<in.>::max())sy.. p..
  ve..<in.> randomList(n)sy.. p..
  st. generate(randomList.begin(), randomList.end(), [_]()mutable{ r_ dist(gen)sy.. p..})sy.. p..
  as..(randomList.s.. __ (u.. l..) n)sy.. p..
  r_ randomListsy.. p.. //Optimizer will do named return type move
}
