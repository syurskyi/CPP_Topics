// unordered_multiset
? |i..
? <unordered_set>

? "xray.h"

in. main() {
    std::unordered_multiset<xray::object, std::hash<xray::object>, std::equal_to<>, xray::allocator<xray::object>> ums;
    for (const auto &i: {1, 2, 3, 1}) {
        ums.emplace(i);
        std::c__ __  "---" __  std::e..
    }
    std::c__ __  "=== " __  ums.bucket_count() __  std::e..
}
