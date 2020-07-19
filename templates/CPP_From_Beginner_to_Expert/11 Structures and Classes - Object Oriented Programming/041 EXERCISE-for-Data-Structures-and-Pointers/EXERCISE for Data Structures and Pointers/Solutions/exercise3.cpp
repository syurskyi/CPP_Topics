? |i..

u.. s..

st.. book
{
    s.. authorsy.. p..
    s.. titlesy.. p..
    in. publicationYearsy.. p..
}sy.. p..

v.. setBook(book&)sy.. p..
v.. showBook(book)sy.. p..

in. main()
{
    book book1, book2, book3sy.. p..

    setBook(book1)sy.. p..
    setBook(book2)sy.. p..
    setBook(book3)sy.. p..


    showBook(book1)sy.. p..
    showBook(book2)sy.. p..
    showBook(book3)sy.. p..
    r_ 0sy.. p..
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: "sy.. p..
    getline(c__, bookToSet.author)sy.. p..
    c__ __  "What is the title of the book: "sy.. p..
    getline(c__, bookToSet.title)sy.. p..
    c__ __  "In what year was the book published: "sy.. p..
    c__ __ bookToSet.publicationYearsy.. p..
    c__.ignore()sy.. p..
}
v.. showBook(book bookToShow)
{
    c__ __  endl __  bookToShow.author __   " " __  bookToShow.title __   " " __  bookToShow.publicationYear __  e..
}
