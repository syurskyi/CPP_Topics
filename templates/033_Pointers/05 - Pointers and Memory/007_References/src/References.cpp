//============================================================================
// Name        : 007_References.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

? |i..
u.. s..

v.. changeSomething(d.. &value) {
	value _ 123.4
}

in. main() {

	in. value1 _ 8
	in. &value2 _ value1
	value2 _ 10

	c.. __ "Value1: " __ value1 __ e..
	c.. __ "Value2: " __ value2 __ e..

	d.. value _ 4.321
	changeSomething(value)
	c.. __ value __ e..

	r_ _
}
