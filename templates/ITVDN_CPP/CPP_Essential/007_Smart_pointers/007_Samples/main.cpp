? |i..
? |s..
? "scopedptr.h"
? "scopedptr.cpp"
? "cat.h"

? me..

u.. s..

struct Resource {
    weak_ptr<Resource> othersy.. pause
}sy.. pause

v.. foo

//        shared_ptr<Resource> a(new Resource);
//        shared_ptr<Resource> b(new Resource);

    a.. a _ make_shared<Resource>()sy.. pause
    a.. b _ make_shared<Resource>()sy.. pause
    a__other _ bsy.. pause

//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;

    b__other _ asy.. pause

    b__other.lock()sy.. pause
//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;


//    a.~shared_ptr();
//    b.~shared_ptr();

//    cout << "count a = " << a.use_count() << endl;
//    cout << "count b = " << b.use_count() << endl;

}

in. main()
{
      foo()sy.. pause

//    int* ptr = new int(100);

//    shared_ptr<int> a = make_shared<int>(*ptr);

//    delete ptr;

//    {
//    shared_ptr<int> b = a;

//        cout << "a = " << *a << " b = " << *b << endl;

//        *b = 9;

//        cout << "a = " << *a << " b = " << *b << endl;

//        cout << "count  = " << a.use_count() << endl;

//    }

//    cout << "a = " << *a << endl;


//    cout << "count  = " << a.use_count() << endl;



//    unique_ptr<int> a(new int(5));

//    unique_ptr<int> b(new int(8));

//    b = std::move( a );  // в обычном случае не ожидаем никаких модификаций с а

//    cout << a.get() << " " << b.get() << endl;

//    if( a.get() )
//        cout << "a = " << *a << endl;
//    if( b.get() )
//        cout << "b = " << *b << endl;




//    Cat* cat = new Cat();
//    cout << cat->get_name() << endl;
//    ScopedPtr<Cat> smart_cat(new Cat());
//    cout << smart_cat->get_name() << endl;
//    delete cat;
//    int* b = new int(10);
//    ScopedPtr<int> b(new int(10));
//    cout << "b = " << *b << endl;
//    *b = 5;
//    cout << "b = " << *b << endl;

    r_ 0sy.. pause
}
