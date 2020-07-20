? |i..

u.. s..

main

    in. minValue, maxValue, elementToChecksy.. p..
    bo.. isGreaterThanMinValue, isLowerThanMaxValuesy.. p..

    c__ __  "Please input the minimum value: "
    c__ __ minValuesy.. p..
    c__ __  "Please input the maximum value: "
    c__ __ maxValuesy.. p..
    c__ __  "Please input the number to check: "
    c__ __ elementToChecksy.. p..

    isGreaterThanMinValue _ (minValue <_ elementToCheck)
    isLowerThanMaxValue _ (elementToCheck <_ maxValue)

    c__ __  "Is the value " __  elementToCheck __  " greater or equal to " __  minValue __  " ? " __  isGreaterThanMinValue __  e..
    c__ __  "Is the value " __  elementToCheck __  " lower or equal to " __  maxValue __  " ? " __  isLowerThanMaxValue __  e..



}


