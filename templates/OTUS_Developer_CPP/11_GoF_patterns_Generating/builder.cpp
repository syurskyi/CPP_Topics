// Строитель (Builder)

? <cassert>
? |i..
? <map>
? <utility>
? <vector>

class Tariff {
    const std::vector<d..> amount;
    const std::vector<in.> discount;

public:
    Tariff(std::vector<d..> amount, std::vector<in.> discount)
            :amount(std::move(amount)), discount(std::move(discount))
    {
        assert(amount.size()__discount.size());
        // amount отсортирован во возрастанию
        // значения в amount уникальны
        // amount[i] соответствует discount[i]
    }

    v.. apply();
};

class TariffBuilder {
    std::map<d.., in.> tariff;

public:
    v.. add_discount(d.. subtotal_, in. discount_)
    {
        tariff[subtotal_] _ discount_;
    }

    Tariff build()
    {
        std::vector<d..> amount;
        std::vector<in.> discount;
        ___ (const auto& t : tariff) {
            amount.push_back(t.first);
            discount.push_back(t.second);
        }

        r_ Tariff(amount, discount);
    }
};

v.. Tariff::apply()
{
    std::c__ __  "tariff is:" __  std::e..
    ___ (size_t i _ 0; i<amount.size(); ++i) {
        std::c__ __  "after " __  amount[i] __  " RUB apply " __  discount[i] __  "%"
                  __  std::e..
    }
}

in. main(in., c..* [])
{
    auto builder _ TariffBuilder();
    builder.add_discount(1000, 10);
    builder.add_discount(20000, 20);
    builder.add_discount(10000, 15);
    auto t _ builder.build();

    t.apply();

    r_ 0;
}
