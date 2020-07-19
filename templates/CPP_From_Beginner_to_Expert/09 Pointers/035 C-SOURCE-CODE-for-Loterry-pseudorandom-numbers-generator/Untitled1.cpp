? |i..

u.. s..
/* LOTTERY - pseudo-random numbers generator - drawing numbers */
v.. lottery(in., in.)sy.. p..

in. main()
{
//  srand(time(NULL)); //seeds

 //   int nr = rand() % 49 + 1; //[1, 49]

   // cout << nr << endl;



    lottery(49, 6)sy.. p..

    r_ 0sy.. p..
}
v.. lottery(in. total_balls, in. balls_to_draw)
{
    __ (total_balls < balls_to_draw)
        r_sy.. p..

     srand(time(NULL))sy.. p.. //seeds

     in. *balls _ n.. in.[balls_to_draw]sy.. p..

     ___ (in. i _ 0sy.. p.. i < balls_to_drawsy.. p.. ###)
     {
         balls[i] _ rand() % total_balls + 1sy.. p..

         ___ (in. j _ 0sy.. p.. j < i + 1sy.. p.. j++)
         {
            __(balls[i] __ balls[j] && i !_ j)
            {
                i--sy.. p..
                b..
            }
            ____ __ (j __ i)
                c__ __  balls[i] __  e..
         }
     }

     de..[] ballssy.. p..
}
