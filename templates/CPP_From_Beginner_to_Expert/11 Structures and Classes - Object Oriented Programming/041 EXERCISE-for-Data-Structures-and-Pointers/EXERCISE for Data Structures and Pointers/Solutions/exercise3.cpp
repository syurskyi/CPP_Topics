? |i..

u.. s..

struct book
{
    s.. authorsy.. pause
    s.. titlesy.. pause
    in. publicationYearsy.. pause
}sy.. pause

v.. setBook(book&)sy.. pause
v.. showBook(book)sy.. pause

in. main()
{
    book book1, book2, book3sy.. pause

    setBook(book1)sy.. pause
    setBook(book2)sy.. pause
    setBook(book3)sy.. pause


    showBook(book1)sy.. pause
    showBook(book2)sy.. pause
    showBook(book3)sy.. pause
    r_ 0sy.. pause
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: "sy.. pause
    getline(c__, bookToSet.author)sy.. pause
    c__ __  "What is the title of the book: "sy.. pause
    getline(c__, bookToSet.title)sy.. pause
    c__ __  "In what year was the book published: "sy.. pause
    c__ __ bookToSet.publicationYearsy.. pause
    c__.ignore()sy.. pause
}
v.. showBook(book bookToShow)
{
    c__ __  endl __  bookToShow.author __   " " __  bookToShow.title __   " " __  bookToShow.publicationYear __  e..
}
