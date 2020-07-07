? |i..
? <cstdlib>

u.. s..

main ()
{
     in. pin, checkPinsy.. pause
     in. counter _ 5sy.. pause

     c__ __  "Input your pin number for the first time: "sy.. pause
     c__ __ pinsy.. pause

     system("cls")sy.. pause

     do
     {
         c__ __  "Input your pin(" __  counter __  " tries left): "sy.. pause
         c__ __ checkPinsy.. pause

         system("cls")sy.. pause
         counter--sy.. pause

     } w___ ((checkPin !_ pin) && (counter > 0))sy.. pause

     __ (checkPin __ pin)
     {
        c__ __  "Correct pin, welcome !"sy.. pause
     }
     ____
        c__ __  "You have entered a wrong PIN code for 5 times !"sy.. pause

}
