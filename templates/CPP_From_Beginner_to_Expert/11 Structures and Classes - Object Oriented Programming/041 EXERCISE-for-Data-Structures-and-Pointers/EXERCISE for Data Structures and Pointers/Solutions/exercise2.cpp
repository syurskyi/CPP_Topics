? |i..

u.. s..

st.. book
{
    s.. authorsy.. p..
    s.. titlesy.. p..
    in. publicationYearsy.. p..
}sy.. p..

v.. setBook(book&)sy.. p..

in. main()
{
    book book1, book2, book3sy.. p..

    setBook(book1)sy.. p..
    setBook(book2)sy.. p..
    setBook(book3)sy.. p..

    r_ 0sy.. p..
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: "sy.. p..
    c__ __ bookToSet.authorsy.. p..
    c__ __  "What is the title of the book: "sy.. p..
    c__ __ bookToSet.titlesy.. p..
    c__ __  "In what year was the book published: "sy.. p..
    c__ __ bookToSet.publicationYearsy.. p..
}

