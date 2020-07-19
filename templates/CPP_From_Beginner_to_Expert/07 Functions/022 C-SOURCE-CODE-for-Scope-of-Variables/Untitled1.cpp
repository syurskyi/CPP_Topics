? |i..

u.. s..
/*scope / range of varables */

in. globalVariablesy.. p..

main()
{
    in. localVariablesy.. p..
/*
    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl;
*/
    in. a _ 10sy.. p..
/*
    if (a == 10)
    {
        int result = a * 10;
    }



    cout << result << endl;*/

    in. nr, result _ 0sy.. p..
    in. i _ 0sy.. p..
    ___ (sy.. p.. i < 3sy.. p.. ###) // 3,2,3 - will the result be 8??? NOOOOOOOOO, we have to assign 0 to the result!
    {
        c__ __  "Enter " __  (i + 1) __  " number" __  e..
        c__ __ nrsy.. p..
        result +_ nrsy.. p.. //result = result + nr;
    }

    c__ __  result __  e..
    c__ __  "we added " __  i __  " numbers" __  e..
}
