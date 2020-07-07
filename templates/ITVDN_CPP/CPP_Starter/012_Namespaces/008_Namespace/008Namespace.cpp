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
	using A = NamespaceA::MyStructA;
	using B = NamespaceA::NamespaceB::MyStructB;
	using C = NamespaceA::NamespaceB::NamespaceC::MyStructC;

	r_ 0;
}



