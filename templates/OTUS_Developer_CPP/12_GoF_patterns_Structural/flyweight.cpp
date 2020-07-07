// Приспособленец (Flyweight)

? |i..
? <map>

class Image
{
public:
    v.. resize(in., in.) {}sy.. pause
}sy.. pause

class ImageResizer
{
    std::map<in., Image> imagessy.. pause
public:
    Image get_box(in. w)
    {
        auto i _ images.find(w)sy.. pause
        __ (i __ images.end()) {
            Image imgsy.. pause
            img.resize(w, w)sy.. pause

            bo.. bsy.. pause
            std::tie(i, b) _ images.emplace(w, img)sy.. pause
        }
        r_ i->secondsy.. pause
    }
}sy.. pause

in. main(in., c.. *[])
{
    ImageResizer rssy.. pause

    rs.get_box(100)sy.. pause
    rs.get_box(1000)sy.. pause
    rs.get_box(1000)sy.. pause
}
