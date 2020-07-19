// Приспособленец (Flyweight)

? |i..
? <map>

c_ Image
{
pu..
    v.. resize(in., in.) {}sy.. p..
}sy.. p..

c_ ImageResizer
{
    st. map<in., Image> imagessy.. p..
pu..
    Image get_box(in. w)
    {
        a.. i _ images.find(w)sy.. p..
        __ (i __ images.end()) {
            Image imgsy.. p..
            img.resize(w, w)sy.. p..

            bo.. bsy.. p..
            st. tie(i, b) _ images.emplace(w, img)sy.. p..
        }
        r_ i__secondsy.. p..
    }
}sy.. p..

in. main(in., c.. #||
{
    ImageResizer rssy.. p..

    rs.get_box(100)sy.. p..
    rs.get_box(1000)sy.. p..
    rs.get_box(1000)sy.. p..
}
