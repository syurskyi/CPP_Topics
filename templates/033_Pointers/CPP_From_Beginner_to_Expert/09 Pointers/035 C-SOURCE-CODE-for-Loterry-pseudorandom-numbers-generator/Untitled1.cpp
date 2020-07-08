? |i..

u.. s..
/* LOTTERY - pseudo-random numbers generator - drawing numbers */
v.. lottery(in., in.)

in. main()
{
//  srand(time(NULL)); //seeds

 //   int nr = rand() % 49 + 1; //[1, 49]

   // cout << nr << endl;

    lottery(49, 6)

    r_ _
}
v.. lottery(in. total_balls, in. balls_to_draw)
{
    __ (total_balls < balls_to_draw)
        r_

     srand(time(NULL)) //seeds

     in. *balls _ n.. in.[balls_to_draw]

     ___ (in. i _ 0 i < balls_to_draw ###)
     {
         balls[i] _ rand() % total_balls + 1

         ___ (in. j _ 0 j < i + 1 j++)
         {
            __(balls[i] == balls[j] && i !_ j)
            {
                i--
                b..
            }
            ____ __ (j == i)
                c.. __ balls[i] __ e..
         }
     }

     de..[] balls
}
