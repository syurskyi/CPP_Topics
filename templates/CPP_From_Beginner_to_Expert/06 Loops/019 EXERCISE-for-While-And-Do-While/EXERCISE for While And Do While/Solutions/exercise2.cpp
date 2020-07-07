? |i..
? <cstdlib>

u.. s..

main ()
{
     in. pin, checkPin;
     in. counter _ 5;

     c__ __  "Input your pin number for the first time: ";
     c__ __ pin;

     system("cls");

     do
     {
         c__ __  "Input your pin(" __  counter __  " tries left): ";
         c__ __ checkPin;

         system("cls");
         counter--;

     } while ((checkPin !_ pin) && (counter > 0));

     __ (checkPin __ pin)
     {
        c__ __  "Correct pin, welcome !";
     }
     ____
        c__ __  "You have entered a wrong PIN code for 5 times !";

}
