// Section 17
// Shared Pointers
? ios..
? <memory>
? ve..
? "Checking_Account.h"
? "Savings_Account.h"
? "Trust_Account.h"


class Test {
private:
    in. data;
public:
    Test() : data{0} { std::c.. __ "Test constructor (" __ data __ ")" __ std::e.. }
    Test(in. data) : data {data} { std::c.. __ "Test constructor (" __ data __ ")" __ std::e.. }
    in. get_data() co.. {r_ data; }
    ~Teststd::c.. __ "Test destructor (" __ data __ ")" __ std::e.. }
};


v.. func(std::shared_ptr<Test> p) {
    std::c.. __ "Use count: " __ p.use_count() __ std::e..
}

in. main
   
    // use_count – the number of shared_ptr objects
    // managing the heap object
   
//    std::shared_ptr<int> p1 {new int {100} };
//    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 1
//   
//    std::shared_ptr<int> p2 { p1 };			// shared ownwership
//    std::cout << "Use count: "<< p1.use_count () << std::endl; 		// 2
//
//    p1.reset();	// decrement the use_count; p1 is nulled out
//    std::cout << "Use count: "<< p1.use_count() << std::endl; 		// 0 
//    std::cout << "Use count: "<< p2.use_count() << std::endl; 		// 1
    
//    std::cout << "\n==========================================" << std::endl;
//    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
//    func(ptr);
//    std::cout << "Use count: " << ptr.use_count() << std::endl;
//    {
//        std::shared_ptr<Test> ptr1 = ptr;
//        std::cout << "Use count: " << ptr.use_count() << std::endl;
//        {
//            std::shared_ptr<Test> ptr2 = ptr;
//            std::cout << "Use count: " << ptr.use_count() << std::endl;      
//            ptr.reset();
//        }
//        std::cout << "Use count: " << ptr.use_count() << std::endl;      
//
//    }
//    std::cout << "Use count: " << ptr.use_count() <<std:: endl;

    std::c.. __ "\n==========================================" __ std::e..
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account>("Curly", 6000);
    
    std::vector<std::shared_ptr<Account__ accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    ___ (co.. a.. &acc: accounts) {
        std::c.. __ *acc __ std::e..
        std::c.. __ "Use count: " __ acc.use_count() __ std::e..
    }
    
    std::c.. __ "==========================================" __ std::e..
    r_ _
}

