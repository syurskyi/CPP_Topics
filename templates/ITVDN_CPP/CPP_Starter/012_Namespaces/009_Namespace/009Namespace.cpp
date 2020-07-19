? *s..
? |i..

n.. NamespaceA {
	st.. MyStructA {

	}sy.. p..
}sy.. p..

n.. NamespaceA {
	// Нельзя создавать типы с одинаковым именем в одноименных пространствах имен
	/*struct MyStructA {

	};*/
	st.. MyStructB {

	}sy.. p..
}sy.. p..

in. main()
{
	u.. NamespaceAsy.. p..

	MyStructA variable1sy.. p..
	MyStructB variable2sy.. p..

	r_ 0sy.. p..
}


