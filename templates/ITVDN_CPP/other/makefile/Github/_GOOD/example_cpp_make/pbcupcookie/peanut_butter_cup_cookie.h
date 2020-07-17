?i.. PEANUT_BUTTER_CUP_COOKIE_H
_de.. PEANUT_BUTTER_CUP_COOKIE_H

? "peanut_butter_cup.h"
? "cookie.h"

n.. PeanutButterCupCookie {
p..
    PeanutButterCupCookie(PeanutButterCup& pb, Cookie& c);
    v.. eat();
    PeanutButterCupCookie MakeCookie();
    bo.. IsEaten();
pr..
    PeanutButterCup pbc_;
    Cookie c_;
    bo.. is_eaten = false;
};

e.. // PEANUT_BUTTER_CUP_COOKIE_H


