? |i..
? <cstdlib>

u.. s..

main ()
{
     in. pin, checkPin;
     in. counter = 5;

     c__ __  "Input your pin number for the first time: ";
     c__ >> pin;

     system("cls");

     do
     {
         c__ __  "Input your pin(" __  counter __  " tries left): ";
         c__ >> checkPin;

         system("cls");
         counter--;

     } while ((checkPin != pin) && (counter > 0));

     __ (checkPin == pin)
     {
        c__ __  "Correct pin, welcome !";
     }
     ____
        c__ __  "You have entered a wrong PIN code for 5 times !";

}
