//? |i..
//? <cstdlib>
//
//u.. s..
//
//in. * createArray in.
//
//v.. swapTwoValues in.#, in.#
//
//v.. fillArrayWithValues in.||, in.
//v.. printArrayValues(in.||, in.
//
//v.. bubbleSort in.||, in., in. _ 1
//v.. selectionSort in.||, in., in. _ 1
//
//
//in. main
//
//
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
//v.. s.. in.# firstValue, in.# secondValue)
//
//    in. temporaryVariable
//
//    temporaryVariable _ *f..
//    @f..e _ #?
//    @s.. _ t..
//
//
//v.. f.. in. arrayToFill||, in. sizeOfArray
//
//    ___ in. i _ 0 ? < ? ###
//
//        c.. __ "Enter " __ i+1 __ " element: "
//        ci. __ ? ?
//
//    sy.. "cls"
//
//
//v.. p.. in. arrayToPrint||, in. sizeOfArray
//
//    ___ in. i _ 0 ? < ? ###
//
//        c.. __ "Array[" __ ? __ "] = " __ ? ? __ e..
//
//    c.. __ e..
//
//
//v.. b.. in. arrayToSort||, in. sizeOfArray, in. orderOfSequence
//
//    ___ in. i _ 0 ? < ?-1 ###
//
//        ___ in. j _ 0 ? < ?-1 ###
//
//            __ o.. __ 1 ## a.. ? > a.. ?+1
//
//                    s.. a..+?, a..+?+1
//
//            ____ __ o.. __ 2 ## a.. ? < a.. ?+1
//
//                    s.. a..+?, a..+?+1
//
//
//
//    p.. a.. s..
//
//
//v.. s.. in. arrayToSort||, in. sizeOfArray, in. orderOfSequence
//
//    in. limitIndex
//    ___ in. i _ 0 ? < ? ###)
//
//        l.. _ i
//        ___ in. j _ ? ? < s.. ###
//
//            __ o.. __ 1 ## a.. ? < a.. l..
//
//                l.. _ j
//
//            ____ __ o.. __ 2 ## a..? > a.. l..
//
//                l.. _ j
//
//
//        s.. a..#i, a..#l..
//
//    p.. a.., s..
//
//
