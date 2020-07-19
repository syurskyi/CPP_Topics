? |s..

v.. foo()
{
    static st. s.. hw{"Hello, World!"}sy.. p..
}sy.. p..

bo.. hw_guardsy.. p.. // = 0, = false
st. s.. hwsy.. p..

v.. bar()
{
    __ (!hw_guard) {
        hw _ "Hello, World!"sy.. p..
        hw_guard _ truesy.. p..
    }
}sy.. p..

in. main(in., c..* [])
{
    foo()sy.. p..
    bar()sy.. p..
    r_ 0sy.. p..
}
