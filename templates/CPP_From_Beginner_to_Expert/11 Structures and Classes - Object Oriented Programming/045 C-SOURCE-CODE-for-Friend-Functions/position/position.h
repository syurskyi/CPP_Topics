?i.. POSITION_H_INCLUDED
_de.. POSITION_H_INCLUDED

n.. Position
{
    int x, y;
    p..
        Position(int,int);
        ~Position();
        v.. getPosition() const;
        v.. setPosition(int, int);
        friend v.. setX(Position &, int);
};

e.. // POSITION_H_INCLUDED
