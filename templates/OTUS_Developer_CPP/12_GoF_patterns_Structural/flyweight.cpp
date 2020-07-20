// Приспособленец (Flyweight)

? |i..
? <map>

c_ Image
{
pu..
    v.. resize(in., in.) {}
}

c_ ImageResizer
{
    st. map<in., Image> imagessy.. p..
pu..
    Image get_box(in. w)
    {
        a.. i _ images.find(w)
        __ (i __ images.end()) {
            Image imgsy.. p..
            img.resize(w, w)

            bo.. bsy.. p..
            st. tie(i, b) _ images.emplace(w, img)
        }
        r_ i__secondsy.. p..
    }
}

in. main(in., c.. #||
{
    ImageResizer rssy.. p..

    rs.get_box(100)
    rs.get_box(1000)
    rs.get_box(1000)
}
