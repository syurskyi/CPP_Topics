? |s..

v.. foo()
{
    static st. s.. hw{"Hello, World!"}sy.. pause
}sy.. pause

bo.. hw_guardsy.. pause // = 0, = false
st. s.. hwsy.. pause

v.. bar()
{
    __ (!hw_guard) {
        hw _ "Hello, World!"sy.. pause
        hw_guard _ truesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    foo()sy.. pause
    bar()sy.. pause
    r_ 0sy.. pause
}
