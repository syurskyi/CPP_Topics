// Приспособленец (Flyweight)

? |i..
? <map>

c_ Image
{
pu..
    v.. resize(in., in.) {}sy.. pause
}sy.. pause

c_ ImageResizer
{
    st. map<in., Image> imagessy.. pause
pu..
    Image get_box(in. w)
    {
        a.. i _ images.find(w)sy.. pause
        __ (i __ images.end()) {
            Image imgsy.. pause
            img.resize(w, w)sy.. pause

            bo.. bsy.. pause
            st. tie(i, b) _ images.emplace(w, img)sy.. pause
        }
        r_ i__secondsy.. pause
    }
}sy.. pause

in. main(in., c.. *[])
{
    ImageResizer rssy.. pause

    rs.get_box(100)sy.. pause
    rs.get_box(1000)sy.. pause
    rs.get_box(1000)sy.. pause
}
