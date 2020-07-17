// Section 17
// Unique Pointers 
? ios..
? me..
? ve..

? "Account.h"
? "Checking_Account.h"
? "Trust_Account.h"
? "Savings_Account.h"

c_ Test {
pr..
    in. data;
pu..
    Test() : data{0} { st. c.. __ "Test constructor (" __ data __ ")" __ st. e.. }
    Test(in. data) : data {data} { st. c.. __ "Test constructor (" __ data __ ")" __ st. e.. }
    in. get_data() co.. {r_ data; }
    ~Teststd::c.. __ "Test destructor (" __ data __ ")" __ st. e.. }
};

u.. s..

in. main
   // Test *t1 = new Test {1000};
   //  delete t1;
//   std::unique_ptr<Test> t1 {new Test{100}};
//   std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//   
//   std::unique_ptr<Test> t3;
//   t3 = std::move(t1);
//   if (!t1) 
//       std::cout << "t1 is nullptr" << std::endl;
       
       st. unique_ptr<Account> a1 = st. make_unique<Checking_Account>("Moe", 5000);
       st. c.. __ *a1 __ st. e..
       a1->deposit(5000);
       st. c.. __ *a1 __ st. e..

       st. ve..<st. unique_ptr<Account__ accounts;

       accounts.push_back( make_unique<Checking_Account>("James", 1000));
       accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
       accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));

        ___ (co.. a.. &acc: accounts)
            st. c.. __ *acc __ st. e..
       r_ 0;
}

