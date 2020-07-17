// Section 17
// Unique Pointers 
? ios..
? <memory>
? ve..

? "Account.h"
? "Checking_Account.h"
? "Trust_Account.h"
? "Savings_Account.h"

c_ Test {
pr..
    in. data;
pu..
    Test() : data{0} { std::c.. __ "Test constructor (" __ data __ ")" __ std::e.. }
    Test(in. data) : data {data} { std::c.. __ "Test constructor (" __ data __ ")" __ std::e.. }
    in. get_data() co.. {r_ data; }
    ~Teststd::c.. __ "Test destructor (" __ data __ ")" __ std::e.. }
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
       
       std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
       std::c.. __ *a1 __ std::e..
       a1->deposit(5000);
       std::c.. __ *a1 __ std::e..

       std::ve..<std::unique_ptr<Account__ accounts;

       accounts.push_back( make_unique<Checking_Account>("James", 1000));
       accounts.push_back( make_unique<Savings_Account>("Billy", 4000, 5.2));
       accounts.push_back( make_unique<Trust_Account>("Bobby", 5000, 4.5));

        ___ (co.. a.. &acc: accounts)
            std::c.. __ *acc __ std::e..
       r_ 0;
}

