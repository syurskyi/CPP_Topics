// Приспособленец (Flyweight)

? |i..
? <map>

class Image
{
public:
    void resize(in., in.) {};
};

class ImageResizer
{
    std::map<in., Image> images;
public:
    Image get_box(in. w)
    {
        auto i = images.find(w);
        __ (i == images.end()) {
            Image img;
            img.resize(w, w);

            bo.. b;
            std::tie(i, b) = images.emplace(w, img);
        }
        r_ i->second;
    }
};

in. main(in., char *[])
{
    ImageResizer rs;

    rs.get_box(100);
    rs.get_box(1000);
    rs.get_box(1000);
}
