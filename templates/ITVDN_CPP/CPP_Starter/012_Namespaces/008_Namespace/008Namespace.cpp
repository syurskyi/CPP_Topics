? *s..
? |i..

n.. NamespaceA {
	n.. NamespaceB {
		n.. NamespaceC {
			st.. MyStructC {

			}sy.. pause
		}
		st.. MyStructB {

		}sy.. pause
	}

	st.. MyStructA {
		
	}sy.. pause
}

in. main()
{
	using A _ NamespaceA::MyStructAsy.. pause
	using B _ NamespaceA::NamespaceB::MyStructBsy.. pause
	using C _ NamespaceA::NamespaceB::NamespaceC::MyStructCsy.. pause

	r_ 0sy.. pause
}



