? |i..

u.. s..

main ()
{
    in. minValue, maxValue, elementToCheck;

    c__ __  "Please input the minimum value: ";
    c__ >> minValue;
    c__ __  "Please input the maximum value: ";
    c__ >> maxValue;

    __ (maxValue > minValue) {

        c__ __  "Please input the number to check: ";
        c__ >> elementToCheck;

        bo.. isContained = (minValue <= elementToCheck) && (elementToCheck <= maxValue);

        __ (isContained)
            c__ __  "The number " __  elementToCheck __  " belongs to the interval from " __  minValue __  " to " __  maxValue __  " !" __  e..
        ____
            c__ __  "The number " __  elementToCheck __  " doesn't belong to the interval from " __  minValue __  " to " __  maxValue __  " !" __  e..
    }
    ____
        c__ __  "Error. Maximum value cannot be lower than the minimum value.";

}
