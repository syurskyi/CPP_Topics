? *s..
? |i..

n.. NamespaceA {
	n.. NamespaceB {
		n.. NamespaceC {
			struct MyStructC {

			}sy.. pause
		}
		struct MyStructB {

		}sy.. pause
	}

	struct MyStructA {
		
	}sy.. pause
}

in. main()
{
	using A _ NamespaceA::MyStructAsy.. pause
	using B _ NamespaceA::NamespaceB::MyStructBsy.. pause
	using C _ NamespaceA::NamespaceB::NamespaceC::MyStructCsy.. pause

	r_ 0sy.. pause
}



