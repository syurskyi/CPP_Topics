? *s..
? |i..

n.. NamespaceA {
	struct MyStructA {

	}sy.. pause
}sy.. pause

n.. NamespaceA {
	// Нельзя создавать типы с одинаковым именем в одноименных пространствах имен
	/*struct MyStructA {

	};*/
	struct MyStructB {

	}sy.. pause
}sy.. pause

in. main()
{
	u.. NamespaceAsy.. pause

	MyStructA variable1sy.. pause
	MyStructB variable2sy.. pause

	r_ 0sy.. pause
}


