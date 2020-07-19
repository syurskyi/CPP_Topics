? *s..
? |i..

n.. NamespaceA {
	n.. NamespaceB {
		n.. NamespaceC {
			st.. MyStructC {

			}sy.. p..
		}
		st.. MyStructB {

		}sy.. p..
	}

	st.. MyStructA {
		
	}sy.. p..
}

in. main()
{
	using A _ NamespaceA::MyStructAsy.. p..
	using B _ NamespaceA::NamespaceB::MyStructBsy.. p..
	using C _ NamespaceA::NamespaceB::NamespaceC::MyStructCsy.. p..

	r_ 0sy.. p..
}



