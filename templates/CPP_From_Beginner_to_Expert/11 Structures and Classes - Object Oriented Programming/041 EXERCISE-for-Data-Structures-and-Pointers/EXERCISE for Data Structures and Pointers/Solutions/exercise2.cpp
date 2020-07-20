? |i..

u.. s..

st.. book
{
    s.. authorsy.. p..
    s.. titlesy.. p..
    in. publicationYearsy.. p..
}

v.. setBook(book&)

in. main()
{
    book book1, book2, book3sy.. p..

    setBook(book1)
    setBook(book2)
    setBook(book3)

    r_ 0sy.. p..
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: "
    c__ __ bookToSet.authorsy.. p..
    c__ __  "What is the title of the book: "
    c__ __ bookToSet.titlesy.. p..
    c__ __  "In what year was the book published: "
    c__ __ bookToSet.publicationYearsy.. p..
}

