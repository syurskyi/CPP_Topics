? |i..

u.. s..

struct book
{
    string author;
    string title;
    in. publicationYear;
};

void setBook(book&);

in. main()
{
    book book1, book2, book3;

    setBook(book1);
    setBook(book2);
    setBook(book3);

    r_ 0;
}

void setBook(book &bookToSet)
{
    c__ __  "Who is the author of the book: ";
    c__ >> bookToSet.author;
    c__ __  "What is the title of the book: ";
    c__ >> bookToSet.title;
    c__ __  "In what year was the book published: ";
    c__ >> bookToSet.publicationYear;
}

