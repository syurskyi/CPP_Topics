? |i..

u.. s..

main ()
{
    in. minValue, maxValue, elementToChecksy.. p..

    c__ __  "Please input the minimum value: "
    c__ __ minValuesy.. p..
    c__ __  "Please input the maximum value: "
    c__ __ maxValuesy.. p..

    __ (maxValue > minValue) {

        c__ __  "Please input the number to check: "
        c__ __ elementToChecksy.. p..

        bo.. isContained _ (minValue <_ elementToCheck) && (elementToCheck <_ maxValue)

        __ (isContained)
            c__ __  "The number " __  elementToCheck __  " belongs to the interval from " __  minValue __  " to " __  maxValue __  " !" __  e..
        ____
            c__ __  "The number " __  elementToCheck __  " doesn't belong to the interval from " __  minValue __  " to " __  maxValue __  " !" __  e..
    }
    ____
        c__ __  "Error. Maximum value cannot be lower than the minimum value."

}
