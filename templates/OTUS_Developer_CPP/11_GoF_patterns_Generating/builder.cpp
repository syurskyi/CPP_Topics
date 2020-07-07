// Строитель (Builder)

? <cassert>
? |i..
? <map>
? <utility>
? <vector>

class Tariff {
    c.. std::vector<d..> amountsy.. pause
    c.. std::vector<in.> discountsy.. pause

public:
    Tariff(std::vector<d..> amount, std::vector<in.> discount)
            :amount(std::move(amount)), discount(std::move(discount))
    {
        assert(amount.size()__discount.size())sy.. pause
        // amount отсортирован во возрастанию
        // значения в amount уникальны
        // amount[i] соответствует discount[i]
    }

    v.. apply()sy.. pause
}sy.. pause

class TariffBuilder {
    std::map<d.., in.> tariffsy.. pause

public:
    v.. add_discount(d.. subtotal_, in. discount_)
    {
        tariff[subtotal_] _ discount_sy.. pause
    }

    Tariff build()
    {
        std::vector<d..> amountsy.. pause
        std::vector<in.> discountsy.. pause
        ___ (c.. auto& t : tariff) {
            amount.push_back(t.first)sy.. pause
            discount.push_back(t.second)sy.. pause
        }

        r_ Tariff(amount, discount)sy.. pause
    }
}sy.. pause

v.. Tariff::apply()
{
    std::c__ __  "tariff is:" __  std::e..
    ___ (size_t i _ 0sy.. pause i<amount.size()sy.. pause ++i) {
        std::c__ __  "after " __  amount[i] __  " RUB apply " __  discount[i] __  "%"
                  __  std::e..
    }
}

in. main(in., c..* [])
{
    auto builder _ TariffBuilder()sy.. pause
    builder.add_discount(1000, 10)sy.. pause
    builder.add_discount(20000, 20)sy.. pause
    builder.add_discount(10000, 15)sy.. pause
    auto t _ builder.build()sy.. pause

    t.apply()sy.. pause

    r_ 0sy.. pause
}
