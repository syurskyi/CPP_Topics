? |i..

u.. s..
/* LOTTERY - pseudo-random numbers generator - drawing numbers */
v.. lottery(in., in.)sy.. pause

in. main()
{
//  srand(time(NULL)); //seeds

 //   int nr = rand() % 49 + 1; //[1, 49]

   // cout << nr << endl;



    lottery(49, 6)sy.. pause

    r_ 0sy.. pause
}
v.. lottery(in. total_balls, in. balls_to_draw)
{
    __ (total_balls < balls_to_draw)
        r_sy.. pause

     srand(time(NULL))sy.. pause //seeds

     in. *balls _ n.. in.[balls_to_draw]sy.. pause

     ___ (in. i _ 0sy.. pause i < balls_to_drawsy.. pause i++)
     {
         balls[i] _ rand() % total_balls + 1sy.. pause

         ___ (in. j _ 0sy.. pause j < i + 1sy.. pause j++)
         {
            __(balls[i] __ balls[j] && i !_ j)
            {
                i--sy.. pause
                b..
            }
            ____ __ (j __ i)
                c__ __  balls[i] __  e..
         }
     }

     delete[] ballssy.. pause
}
