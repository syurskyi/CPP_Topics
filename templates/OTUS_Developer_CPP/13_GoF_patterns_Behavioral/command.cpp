// Команда (Command)

// vba
// motion capture
// source event ???
// kafka
// binlog (random?)

? |i..
? ve..

c_ Document {
    st. s.. textsy.. p..

pu..
    v.. create()
    {
        st. c__ __  "new document" __  st. e..
        text.clear()sy.. p..
    }

    v.. new_para(c.. st. s..& para)
    {
        text +_ para+"\n"sy.. p..
        st. c__ __  "new para " __  para __  st. e..
    }

    v.. save_as(c.. st. s..& name)
    {
        st. c__ __  "--- " __  name __  "---" __  st. e..
        st. c__ __  text __  st. e..
    }
}sy.. p..

c_ Command {
pu..
    v.. ~Command() _ defaultsy.. p..

    v.. v.. execute() _ 0sy.. p..

    v.. v.. py() _ 0sy.. p..

pr..
    ex__ Command(Document* d)
            :document(d) { }

    Document* documentsy.. p..
}sy.. p..

c_ NewDocumentCommand : pu.. Command {
pu..
    ex__ NewDocumentCommand(Document* d)
            :Command(d) { }

    v.. execute() ov..
    {
        document__create()sy.. p..
    }

    v.. py() ov..
    {
        st. c__ __  "text = []" __  st. e..
    }
}sy.. p..

c_ ParaCommand : pu.. Command {
    st. s.. textsy.. p..
pu..
    ParaCommand(Document* d, st. s.. text_)
            :Command(d), text(st. move(text_)) { }

    v.. execute() ov..
    {
        document__new_para(text)sy.. p..
    }

    v.. py() ov..
    {
        st. c__ __  "text.append(\"" __  text __  "\")" __  st. e..
    }
}sy.. p..

c_ SaveAsCommand : pu.. Command {
    st. s.. fnamesy.. p..
pu..
    SaveAsCommand(Document* d, st. s.. fname_)
            :Command(d), fname(st. move(fname_)) { }

    v.. execute() ov..
    {
        document__save_as(fname)sy.. p..
    }

    v.. py() ov..
    {
        st. c__ __  "with open(\"" __  fname __  """\", \"w\") as f:" __  st. e..
        st. c__ __  "  f.write(\"\\n\".join(text))" __  st. e..
    }
}sy.. p..

in. main(in., c..* [])
{
    Document docsy.. p..

    st. ve..<Command*> historysy.. p..
    history.push_back(n.. NewDocumentCommand(&doc))sy.. p..
    history.push_back(n.. ParaCommand(&doc, "Manual"))sy.. p..
    history.push_back(n.. ParaCommand(&doc, ""))sy.. p..
    history.push_back(n.. ParaCommand(&doc, "Hello, World!"))sy.. p..
    history.push_back(n.. SaveAsCommand(&doc, "hello.doc"))sy.. p..

    ___ (a.. i: history) {
        i__execute()sy.. p..
    }

    ___ (a.. i: history) {
        i__py()sy.. p..
    }

    r_ 0sy.. p..
}
