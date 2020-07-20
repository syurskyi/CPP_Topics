? *s..
? |i..

n.. NamespaceA {
	n.. NamespaceB {
		n.. NamespaceC {
			st.. MyStructC {

			}
		}
		st.. MyStructB {

		}
	}

	st.. MyStructA {
		
	}
}

in. main()
{
	u.. A _ NamespaceA::MyStructAsy.. p..
	u.. B _ NamespaceA::NamespaceB::MyStructBsy.. p..
	u.. C _ NamespaceA::NamespaceB::NamespaceC::MyStructCsy.. p..

	r_ 0sy.. p..
}



