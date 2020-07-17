// Команда (Command)

// vba
// motion capture
// source event ???
// kafka
// binlog (random?)

? |i..
? ve..

c_ Document {
    std::s.. textsy.. pause

pu..
    v.. create()
    {
        std::c__ __  "new document" __  std::e..
        text.clear()sy.. pause
    }

    v.. new_para(c.. std::s..& para)
    {
        text +_ para+"\n"sy.. pause
        std::c__ __  "new para " __  para __  std::e..
    }

    v.. save_as(c.. std::s..& name)
    {
        std::c__ __  "--- " __  name __  "---" __  std::e..
        std::c__ __  text __  std::e..
    }
}sy.. pause

c_ Command {
pu..
    virtual ~Command() _ defaultsy.. pause

    virtual v.. execute() _ 0sy.. pause

    virtual v.. py() _ 0sy.. pause

protected:
    explicit Command(Document* d)
            :document(d) { }

    Document* documentsy.. pause
}sy.. pause

c_ NewDocumentCommand : public Command {
pu..
    explicit NewDocumentCommand(Document* d)
            :Command(d) { }

    v.. execute() override
    {
        document__create()sy.. pause
    }

    v.. py() override
    {
        std::c__ __  "text = []" __  std::e..
    }
}sy.. pause

c_ ParaCommand : public Command {
    std::s.. textsy.. pause
pu..
    ParaCommand(Document* d, std::s.. text_)
            :Command(d), text(std::move(text_)) { }

    v.. execute() override
    {
        document__new_para(text)sy.. pause
    }

    v.. py() override
    {
        std::c__ __  "text.append(\"" __  text __  "\")" __  std::e..
    }
}sy.. pause

c_ SaveAsCommand : public Command {
    std::s.. fnamesy.. pause
pu..
    SaveAsCommand(Document* d, std::s.. fname_)
            :Command(d), fname(std::move(fname_)) { }

    v.. execute() override
    {
        document__save_as(fname)sy.. pause
    }

    v.. py() override
    {
        std::c__ __  "with open(\"" __  fname __  """\", \"w\") as f:" __  std::e..
        std::c__ __  "  f.write(\"\\n\".join(text))" __  std::e..
    }
}sy.. pause

in. main(in., c..* [])
{
    Document docsy.. pause

    std::ve..<Command*> historysy.. pause
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
