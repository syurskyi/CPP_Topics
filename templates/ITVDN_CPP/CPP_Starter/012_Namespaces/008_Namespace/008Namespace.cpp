? *s..
? |i..

namespace NamespaceA {
	namespace NamespaceB {
		namespace NamespaceC {
			struct MyStructC {

			};
		}
		struct MyStructB {

		};
	}

	struct MyStructA {
		
	};
}

in. main()
{
	using A _ NamespaceA::MyStructA;
	using B _ NamespaceA::NamespaceB::MyStructB;
	using C _ NamespaceA::NamespaceB::NamespaceC::MyStructC;

	r_ 0;
}



