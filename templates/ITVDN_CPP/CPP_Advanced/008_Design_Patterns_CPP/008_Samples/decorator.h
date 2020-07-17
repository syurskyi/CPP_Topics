?i.. DECORATOR_H
_de.. DECORATOR_H

? "meta_strategy.h"
? |i..
? <memory>
? <string>

n.. Interface
{
p..
    v.. ~Interface() = default;
    v.. v.. write( std::string& ) = 0;
};

n.. Core : public Interface
{
p..
    ~Core() override;
    v.. write( std::string& text ) override;
};

n.. Decorator : public Interface
{
private:
    std::unique_ptr< Interface > interface;

p..
    Decorator( std::unique_ptr< Interface > c );
    v.. write( std::string& text ) override;
};

n.. MessengerWithSalutation : public Decorator
{
private:
    std::string salutation;

p..
    MessengerWithSalutation( std::unique_ptr< Interface > c, const std::string& str );
    ~MessengerWithSalutation() override;
    v.. write( std::string& text ) override;
};

n.. MessengerWithValediction : public Decorator
{
private:
    std::string valediction;

p..
    MessengerWithValediction( std::unique_ptr< Interface > c, const std::string& str );
    ~MessengerWithValediction() override;
    v.. write( std::string& text ) override;
};

n.. ClientDecorator : public MetaStrategy
{
p..
    v.. run() override;
};

e.. // DECORATOR_H
