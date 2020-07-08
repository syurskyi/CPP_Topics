//? |i..
//? <cstdlib>
//
//u.. s..
//
//in. # createArray in.
//
//v.. swapTwoValues in.#, in.#
//
//v.. fillArrayWithValues in.||, in.
//v.. printArrayValues in.||, in.
//
//v.. bubbleSort(in.||, in., in. _ 1
//v.. selectionSort in.||, in., in. _ 1
//
//
//in. main
//
//
//    in. sizeOfArray
//    c.. __ "Input the size of the array to sort: "
//    ci. __ ?
//
//    in.# a _ createArray ?
//
//    f.. ? s..
//    p.. ? s..
//
//    in. orderOfSequence
//    c.. __ e.. __ "Sort Ascending - 1, Descending - 2: "
//    ci. __ ?
//
//    __ ? !_ 2
//        ? _ 1
//
//    ch.. sortChoice
//    c.. __ "Bubble Sort - B or b, Selection Sort - S or s: "
//    cin __ ?
//
//    __ ? !_ 'S' ## ? !_ 's'
//        ? _ 'B'
//
//    __ ? __ 'B' || ? ? 'b')
//
//        b.. ? s.. o..
//
//    ____ __ s.. __ 'S' || s.. __ 's'
//
//        s.. ? s.. o..
//
//
//    de..|| a
//    r_ _
//
//
//in. # c.. in. sizeOfArray
//
//    in.# newArray _ n.. in. ?
//
//    r_ ?
//
//
//v.. s.. in.# firstValue, in.# secondValue
//
//    in. temporaryVariable
//
//    temporaryVariable _ #f..
//    @f.. _ #?
//    @? _ t..
//
//
//v.. f.. in. arrayToFill||, in. sizeOfArray
//
//    ___ in. i _ 0 ? < ? ###
//
//        c.. __ "Enter " __ ?+1 __ " element: "
//        cin __ a.. ?
//
//    sy.. "cls"
//
//
//v.. p.. in. arrayToPrint||, in. sizeOfArray
//
//    ___ in. i _ 0 ? < s.. ###
//
//        c.. __ "Array[" __ ? __ "] = " __ a.. ? __ e..
//
//    c.. __ e..
//
//
//v.. bubbleSort in. arrayToSort||, in. sizeOfArray, in. orderOfSequence
//
//    ___ in. i _ 0 ? < ?-1 ###
//
//        ___ in. j _ 0 ? < ?-1 ###
//
//            __ (o.. __ 1 ## a.. ? > a.. ?+1
//
//                    s.. a..+? a..+?+1
//
//            ____ __ o.. __ 2 ## a.. ? < a.. ?+1
//
//                    s..(a..+? a..+?+1
//
//
//
//    p.. a.. s..
//
//
//v.. s.. in. arrayToSort||, in. sizeOfArray, in. o..
//
//    in. limitIndex
//    ___ in. i _ 0 ? < ? - 1 ###
//
//        ? _ i
//        ___ in. j _ ? ? < ? ###
//
//            __ o.. __ 1 ## a.. j < a.. ?
//
//                ? _ j
//
//            ____ __ o.. __ 2 ## a.. ? > a.. ?
//
//                ? _ j
//
//
//        s.. a..+? a..+?
//
//    p.. a.., s..
//
//
