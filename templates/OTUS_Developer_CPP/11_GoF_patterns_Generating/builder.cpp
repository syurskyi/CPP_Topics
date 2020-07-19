// Строитель (Builder)

? <cassert>
? |i..
? <map>
? <utility>
? ve..

c_ Tariff {
    c.. st. ve..<d..> amountsy.. p..
    c.. st. ve..<in.> discountsy.. p..

pu..
    Tariff(st. ve..<d..> amount, st. ve..<in.> discount)
            :amount(st. move(amount)), discount(st. move(discount))
    {
        as..(amount.s..__discount.size())sy.. p..
        // amount отсортирован во возрастанию
        // значения в amount уникальны
        // amount[i] соответствует discount[i]
    }

    v.. apply()sy.. p..
}sy.. p..

c_ TariffBuilder {
    st. map<d.., in.> tariffsy.. p..

pu..
    v.. add_discount(d.. subtotal_, in. discount_)
    {
        tariff[subtotal_] _ discount_sy.. p..
    }

    Tariff build()
    {
        st. ve..<d..> amountsy.. p..
        st. ve..<in.> discountsy.. p..
        ___ (c.. a..& t : tariff) {
            amount.push_back(t.first)sy.. p..
            discount.push_back(t.second)sy.. p..
        }

        r_ Tariff(amount, discount)sy.. p..
    }
}sy.. p..

v.. Tariff::apply()
{
    st. c__ __  "tariff is:" __  st. e..
    ___ (size_t i _ 0sy.. p.. i<amount.s..sy.. p.. ++i) {
        st. c__ __  "after " __  amount[i] __  " RUB apply " __  discount[i] __  "%"
                  __  st. e..
    }
}

in. main(in., c..* [])
{
    a.. builder _ TariffBuilder()sy.. p..
    builder.add_discount(1000, 10)sy.. p..
    builder.add_discount(20000, 20)sy.. p..
    builder.add_discount(10000, 15)sy.. p..
    a.. t _ builder.build()sy.. p..

    t.apply()sy.. p..

    r_ 0sy.. p..
}
