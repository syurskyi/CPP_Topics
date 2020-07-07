? |i..

u.. s..
/*scope / range of varables */

in. globalVariablesy.. pause

main()
{
    in. localVariablesy.. pause
/*
    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl;
*/
    in. a _ 10sy.. pause
/*
    if (a == 10)
    {
        int result = a * 10;
    }



    cout << result << endl;*/

    in. nr, result _ 0sy.. pause
    in. i _ 0sy.. pause
    ___ (sy.. pause i < 3sy.. pause i++) // 3,2,3 - will the result be 8??? NOOOOOOOOO, we have to assign 0 to the result!
    {
        c__ __  "Enter " __  (i + 1) __  " number" __  e..
        c__ __ nrsy.. pause
        result +_ nrsy.. pause //result = result + nr;
    }

    c__ __  result __  e..
    c__ __  "we added " __  i __  " numbers" __  e..
}
