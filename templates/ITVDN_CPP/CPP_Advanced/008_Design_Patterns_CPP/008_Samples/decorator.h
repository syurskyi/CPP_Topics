#ifndef DECORATOR_H
_de.. DECORATOR_H

? "meta_strategy.h"
? |i..
? <memory>
? <string>

class Interface
{
public:
    virtual ~Interface() = default;
    virtual v.. write( std::string& ) = 0;
};

class Core : public Interface
{
public:
    ~Core() override;
    v.. write( std::string& text ) override;
};

class Decorator : public Interface
{
private:
    std::unique_ptr< Interface > interface;

public:
    Decorator( std::unique_ptr< Interface > c );
    v.. write( std::string& text ) override;
};

class MessengerWithSalutation : public Decorator
{
private:
    std::string salutation;

public:
    MessengerWithSalutation( std::unique_ptr< Interface > c, const std::string& str );
    ~MessengerWithSalutation() override;
    v.. write( std::string& text ) override;
};

class MessengerWithValediction : public Decorator
{
private:
    std::string valediction;

public:
    MessengerWithValediction( std::unique_ptr< Interface > c, const std::string& str );
    ~MessengerWithValediction() override;
    v.. write( std::string& text ) override;
};

class ClientDecorator : public MetaStrategy
{
public:
    v.. run() override;
};

#endif // DECORATOR_H
