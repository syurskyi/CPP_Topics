? |i..

u.. s..
/* LOTTERY - pseudo-random numbers generator - drawing numbers */
void lottery(in., in.);

in. main()
{
//  srand(time(NULL)); //seeds

 //   int nr = rand() % 49 + 1; //[1, 49]

   // cout << nr << endl;



    lottery(49, 6);

    r_ 0;
}
void lottery(in. total_balls, in. balls_to_draw)
{
    __ (total_balls < balls_to_draw)
        r_;

     srand(time(NULL)); //seeds

     in. *balls _ new in.[balls_to_draw];

     for (in. i _ 0; i < balls_to_draw; i++)
     {
         balls[i] _ rand() % total_balls + 1;

         for (in. j _ 0; j < i + 1; j++)
         {
            __(balls[i] __ balls[j] && i !_ j)
            {
                i--;
                b..
            }
            ____ __ (j __ i)
                c__ __  balls[i] __  e..
         }
     }

     delete[] balls;
}
