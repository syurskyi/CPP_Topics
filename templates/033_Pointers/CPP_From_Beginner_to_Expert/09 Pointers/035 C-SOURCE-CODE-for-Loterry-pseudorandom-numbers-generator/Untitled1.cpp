? |i..

u.. s..
/* LOTTERY - pseudo-random numbers generator - drawing numbers */
v.. lottery(in., in.);

in. main()
{
//  srand(time(NULL)); //seeds

 //   int nr = rand() % 49 + 1; //[1, 49]

   // cout << nr << endl;

    lottery(49, 6);

    r_ _
}
v.. lottery(in. total_balls, in. balls_to_draw)
{
    if (total_balls < balls_to_draw)
        return;

     srand(time(NULL)); //seeds

     in. *balls = new in.[balls_to_draw];

     for (in. i = 0; i < balls_to_draw; i++)
     {
         balls[i] = rand() % total_balls + 1;

         for (in. j = 0; j < i + 1; j++)
         {
            if(balls[i] == balls[j] && i != j)
            {
                i--;
                break;
            }
            else if (j == i)
                c.. __ balls[i] __ e..
         }
     }

     delete[] balls;
}
