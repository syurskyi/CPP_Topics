? |i..

u.. s..

main() {

    in. minValue, maxValue, elementToCheck;
    bo.. isContained;

    c__ __  "Please input the minimum value: ";
    c__ >> minValue;
    c__ __  "Please input the maximum value: ";
    c__ >> maxValue;
    c__ __  "Please input the number to check: ";
    c__ >> elementToCheck;

    isContained = (minValue <= elementToCheck) && (elementToCheck <= maxValue);
    c__ __  "Is the number " __  elementToCheck __  " contained in the interval from " __  minValue __  " to " __  maxValue __  " ? " __  isContained;

}


