// http://en.cppreference.com/w/cpp/atomic/atomic_compare_exchange

#include <iostream>
#include <map>

struct Node {
    Node(int value_)
            :value(value_) { };
    int value;
    Node* next{nullptr};
};

struct List {
    Node* head{nullptr};

    void push(Node* p)
    {
        p->next = head;
        head = p;
    }
};

bool casint(int& p, int nvalue, int compare)
{
    if (p==compare) {
        p = nvalue;
        return true;
    }
    else
        return false;
}

bool cas(Node** p, Node* nvalue, Node* compare)
{
    if (*p==compare) {
        *p = nvalue;
        return true;
    }
    else
        return false;
}

struct ListLF {
    Node* head{nullptr};

    void push(Node* p)
    {
        while (true) {
            Node* old_head = head;
            p->next = head;

            if (cas(&head, p, old_head))
                return;
        }
    }
};

int main(int, char* [])
{
    auto m = std::map<int, int>();

    m[1] = 2;

    List l;

    l.push(new Node{42}); // memory leak
    l.push(new Node{100}); // memory leak

    for (Node* i = l.head; i; i = i->next) {
        std::cout << i->value << std::endl;
    }

    return 0;
}
