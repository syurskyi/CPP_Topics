#ifndef POSITION_H_INCLUDED
_de.. POSITION_H_INCLUDED

class Position
{
    int x, y;
    public:
        Position(int,int);
        ~Position();
        v.. getPosition() const;
        v.. setPosition(int, int);
        friend v.. setX(Position &, int);
};

#endif // POSITION_H_INCLUDED
