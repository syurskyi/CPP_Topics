//? |i..
//? <cstdlib>
//
//u.. s..
//
//in. # createArray in.
//
//v.. swapTwoValues in.#, in.#
//
//v.. printArrayValues in.||, in.
//
//v.. bubbleSort in.||, in., in. _ 1
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
//    in.# a _ c.. ?
//
//    p.. ? s..
//
//    in. orderOfSequence
//    c.. __ endl __ "Sort Ascending - 1, Descending - 2: "
//    ci. __ ?
//
//    __ ? !_ 2
//        ? _ 1
//
//    ch.. sortChoice
//    c.. __ "Bubble Sort - B or b, Selection Sort - S or s: "
//    ci. __ ?
//
//    __ ? !_ 'S' ## ? !_ 's'
//        ? _ 'B'
//
//    __ ? __ 'B' ## ? __ 'b'
//
//        bubbleSort(a, sizeOfArray, orderOfSequence)
//
//    ____ __ ? __ 'S' ## ? __ 's'
//
//        selectionSort(a, sizeOfArray, orderOfSequence)
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
//    ___ in. i _ 0 ? < s.. ###
//
//        ? ? _ ra.. %1500
//
//
//    r_ ?
//
//
//v.. swapTwoValues in.# firstValue, in.# secondValue
//
//    in. temporaryVariable
//
//    temporaryVariable _ #f..
//    @f.. _ #?
//    @? _ t..
//
//
//v.. printArrayValues in. arrayToPrint||, in. sizeOfArray
//
//    ___ in. i _ 0 ? < ? ###
//
//        c.. __ "Array[" __ ? __ "] = " __ ? ? __ e..
//
//    c.. __ e..
//
//
//v.. bubbleSort in. arrayToSort||, in. sizeOfArray, in. orderOfSequence
//
//    ___ in. i _ 0 ? < ?-1 ###
//
//        ___ in. j _ 0 ? < sizeOfArray-1 ###
//
//            __ o.. __ 1 ## a.. ? > a ?+1
//
//                    s.. a..+?, a..+?+1
//
//            ____ __ o.. __ 2 ## a.. ? < ? ?+1
//
//                    s.. ?+?, ?+?+1
//
//
//
//    printArrayValues arrayToSort, sizeOfArray
//
//
//v.. selectionSort in. arrayToSort||, in. sizeOfArray, in. orderOfSequence
//
//    in. limitIndex
//    ___ in. i _ 0 ? < ? ###
//
//        ? _ i
//        ___ in. j _ ? ? < s.. ###
//
//            __ o.. __ 1 ## a.. ? < a.. ?
//
//                l.. _ j
//
//            ____ __ o.. __ 2 ## a.. ? > a.. ?
//
//                l.. _ j
//
//
//        s.. a..+?, a..+?
//
//    p.. a.., s..
//
//
