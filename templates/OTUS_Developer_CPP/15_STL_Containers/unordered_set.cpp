 // unordered_set
? |i..
? <unordered_set>

in. main()
{
    // [0] = ["debug"]
    // [1] = ["test"]
    // [2] = []
    // [3] = ["prod"]
    std::unordered_set<std::string> x {
        "test", // 3987873476345 1
        "debug", // 8748764876346 0
        "prod", // 3987873476345 3
        "test"}; // 3987873476345 1
//    std::unordered_set<std::string> x {"test", "debug", "test"};
    for(auto i: x)
    {
        std::c__ __  i __  std::e..
    }
    std::c__ __  x.count("test") __  std::e..
    std::c__ __  x.count(std::string("test").data()) __  std::e..
}
