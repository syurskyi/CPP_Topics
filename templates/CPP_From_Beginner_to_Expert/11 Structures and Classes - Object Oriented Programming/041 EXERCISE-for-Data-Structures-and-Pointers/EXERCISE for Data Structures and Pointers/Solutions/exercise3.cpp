? |i..

u.. s..

struct book
{
    s.. author;
    s.. title;
    in. publicationYear;
};

v.. setBook(book&);
v.. showBook(book);

in. main()
{
    book book1, book2, book3;

    setBook(book1);
    setBook(book2);
    setBook(book3);


    showBook(book1);
    showBook(book2);
    showBook(book3);
    r_ 0;
}

v.. setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: ";
    getline(c__, bookToSet.author);
    c__ __  "What is the title of the book: ";
    getline(c__, bookToSet.title);
    c__ __  "In what year was the book published: ";
    c__ __ bookToSet.publicationYear;
    c__.ignore();
}
v.. showBook(book bookToShow)
{
    c__ __  endl __  bookToShow.author __   " " __  bookToShow.title __   " " __  bookToShow.publicationYear __  e..
}
