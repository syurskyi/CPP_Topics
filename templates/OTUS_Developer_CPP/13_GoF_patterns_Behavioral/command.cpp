// Команда (Command)

// vba
// motion capture
// source event ???
// kafka
// binlog (random?)

? |i..
? <vector>

class Document {
    std::s.. textsy.. pause

public:
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

class Command {
public:
    virtual ~Command() _ defaultsy.. pause

    virtual v.. execute() _ 0sy.. pause

    virtual v.. py() _ 0sy.. pause

protected:
    explicit Command(Document* d)
            :document(d) { }

    Document* documentsy.. pause
}sy.. pause

class NewDocumentCommand : public Command {
public:
    explicit NewDocumentCommand(Document* d)
            :Command(d) { }

    v.. execute() override
    {
        document->create()sy.. pause
    }

    v.. py() override
    {
        std::c__ __  "text = []" __  std::e..
    }
}sy.. pause

class ParaCommand : public Command {
    std::s.. textsy.. pause
public:
    ParaCommand(Document* d, std::s.. text_)
            :Command(d), text(std::move(text_)) { }

    v.. execute() override
    {
        document->new_para(text)sy.. pause
    }

    v.. py() override
    {
        std::c__ __  "text.append(\"" __  text __  "\")" __  std::e..
    }
}sy.. pause

class SaveAsCommand : public Command {
    std::s.. fnamesy.. pause
public:
    SaveAsCommand(Document* d, std::s.. fname_)
            :Command(d), fname(std::move(fname_)) { }

    v.. execute() override
    {
        document->save_as(fname)sy.. pause
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

    std::vector<Command*> historysy.. pause
    history.push_back(new NewDocumentCommand(&doc))sy.. pause
    history.push_back(new ParaCommand(&doc, "Manual"))sy.. pause
    history.push_back(new ParaCommand(&doc, ""))sy.. pause
    history.push_back(new ParaCommand(&doc, "Hello, World!"))sy.. pause
    history.push_back(new SaveAsCommand(&doc, "hello.doc"))sy.. pause

    ___ (auto i: history) {
        i->execute()sy.. pause
    }

    ___ (auto i: history) {
        i->py()sy.. pause
    }

    r_ 0sy.. pause
}
