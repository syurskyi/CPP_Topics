? *s..
? |i..

n.. NamespaceA {
	st.. MyStructA {

	}sy.. pause
}sy.. pause

n.. NamespaceA {
	// Нельзя создавать типы с одинаковым именем в одноименных пространствах имен
	/*struct MyStructA {

	};*/
	st.. MyStructB {

	}sy.. pause
}sy.. pause

in. main()
{
	u.. NamespaceAsy.. pause

	MyStructA variable1sy.. pause
	MyStructB variable2sy.. pause

	r_ 0sy.. pause
}


