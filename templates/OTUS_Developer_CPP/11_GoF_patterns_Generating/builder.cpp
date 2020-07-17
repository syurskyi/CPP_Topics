// Строитель (Builder)

? <cassert>
? |i..
? <map>
? <utility>
? ve..

c_ Tariff {
    c.. st. ve..<d..> amountsy.. pause
    c.. st. ve..<in.> discountsy.. pause

pu..
    Tariff(st. ve..<d..> amount, st. ve..<in.> discount)
            :amount(st. move(amount)), discount(st. move(discount))
    {
        assert(amount.s..__discount.size())sy.. pause
        // amount отсортирован во возрастанию
        // значения в amount уникальны
        // amount[i] соответствует discount[i]
    }

    v.. apply()sy.. pause
}sy.. pause

c_ TariffBuilder {
    st. map<d.., in.> tariffsy.. pause

pu..
    v.. add_discount(d.. subtotal_, in. discount_)
    {
        tariff[subtotal_] _ discount_sy.. pause
    }

    Tariff build()
    {
        st. ve..<d..> amountsy.. pause
        st. ve..<in.> discountsy.. pause
        ___ (c.. a..& t : tariff) {
            amount.push_back(t.first)sy.. pause
            discount.push_back(t.second)sy.. pause
        }

        r_ Tariff(amount, discount)sy.. pause
    }
}sy.. pause

v.. Tariff::apply()
{
    st. c__ __  "tariff is:" __  st. e..
    ___ (size_t i _ 0sy.. pause i<amount.s..sy.. pause ++i) {
        st. c__ __  "after " __  amount[i] __  " RUB apply " __  discount[i] __  "%"
                  __  st. e..
    }
}

in. main(in., c..* [])
{
    a.. builder _ TariffBuilder()sy.. pause
    builder.add_discount(1000, 10)sy.. pause
    builder.add_discount(20000, 20)sy.. pause
    builder.add_discount(10000, 15)sy.. pause
    a.. t _ builder.build()sy.. pause

    t.apply()sy.. pause

    r_ 0sy.. pause
}
