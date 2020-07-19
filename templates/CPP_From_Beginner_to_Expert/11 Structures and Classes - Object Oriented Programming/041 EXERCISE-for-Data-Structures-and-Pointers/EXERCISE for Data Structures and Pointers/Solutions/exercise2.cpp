? |i..

u.. s..

st.. book
{
    s.. authorsy.. pause
    s.. titlesy.. pause
    in. publicationYearsy.. pause
}sy.. pause

v.. setBook(book&)sy.. pause

in. main()
{
    book book1, book2, book3sy.. pause

    setBook(book1)sy.. pause
    setBook(book2)sy.. pause
    setBook(book3)sy.. pause

    r_ 0sy.. pause
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: "sy.. pause
    c__ __ bookToSet.authorsy.. pause
    c__ __  "What is the title of the book: "sy.. pause
    c__ __ bookToSet.titlesy.. pause
    c__ __  "In what year was the book published: "sy.. pause
    c__ __ bookToSet.publicationYearsy.. pause
}

