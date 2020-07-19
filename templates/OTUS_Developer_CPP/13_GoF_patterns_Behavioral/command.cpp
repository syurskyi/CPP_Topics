// Команда (Command)

// vba
// motion capture
// source event ???
// kafka
// binlog (random?)

? |i..
? ve..

c_ Document {
    st. s.. textsy.. pause

pu..
    v.. create()
    {
        st. c__ __  "new document" __  st. e..
        text.clear()sy.. pause
    }

    v.. new_para(c.. st. s..& para)
    {
        text +_ para+"\n"sy.. pause
        st. c__ __  "new para " __  para __  st. e..
    }

    v.. save_as(c.. st. s..& name)
    {
        st. c__ __  "--- " __  name __  "---" __  st. e..
        st. c__ __  text __  st. e..
    }
}sy.. pause

c_ Command {
pu..
    v.. ~Command() _ defaultsy.. pause

    v.. v.. execute() _ 0sy.. pause

    v.. v.. py() _ 0sy.. pause

pr..
    ex__ Command(Document* d)
            :document(d) { }

    Document* documentsy.. pause
}sy.. pause

c_ NewDocumentCommand : pu.. Command {
pu..
    ex__ NewDocumentCommand(Document* d)
            :Command(d) { }

    v.. execute() ov..
    {
        document__create()sy.. pause
    }

    v.. py() ov..
    {
        st. c__ __  "text = []" __  st. e..
    }
}sy.. pause

c_ ParaCommand : pu.. Command {
    st. s.. textsy.. pause
pu..
    ParaCommand(Document* d, st. s.. text_)
            :Command(d), text(st. move(text_)) { }

    v.. execute() ov..
    {
        document__new_para(text)sy.. pause
    }

    v.. py() ov..
    {
        st. c__ __  "text.append(\"" __  text __  "\")" __  st. e..
    }
}sy.. pause

c_ SaveAsCommand : pu.. Command {
    st. s.. fnamesy.. pause
pu..
    SaveAsCommand(Document* d, st. s.. fname_)
            :Command(d), fname(st. move(fname_)) { }

    v.. execute() ov..
    {
        document__save_as(fname)sy.. pause
    }

    v.. py() ov..
    {
        st. c__ __  "with open(\"" __  fname __  """\", \"w\") as f:" __  st. e..
        st. c__ __  "  f.write(\"\\n\".join(text))" __  st. e..
    }
}sy.. pause

in. main(in., c..* [])
{
    Document docsy.. pause

    st. ve..<Command*> historysy.. pause
    history.push_back(n.. NewDocumentCommand(&doc))sy.. pause
    history.push_back(n.. ParaCommand(&doc, "Manual"))sy.. pause
    history.push_back(n.. ParaCommand(&doc, ""))sy.. pause
    history.push_back(n.. ParaCommand(&doc, "Hello, World!"))sy.. pause
    history.push_back(n.. SaveAsCommand(&doc, "hello.doc"))sy.. pause

    ___ (a.. i: history) {
        i__execute()sy.. pause
    }

    ___ (a.. i: history) {
        i__py()sy.. pause
    }

    r_ 0sy.. pause
}
