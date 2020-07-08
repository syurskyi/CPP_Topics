? |s..
? <string.h>
? <malloc.h>

#define MAXSTRLEN 100

ch.. * string_function(ch.. *astring) {
	ch..* s;
	s = (ch..*)malloc(MAXSTRLEN);
	s[0] = 0;		                // need this to initialize the buffer created by malloc
	strcat(s, "Hello ");
	strcat(s, astring);
	strcat(s, "\n");
	r_ s;
}

in. main(in. argc, ch.. @@ {
	p..(string_function("Fred"));
    p..(string_function("Gussie Fink-Nottle"));
	r_ 0;
}
