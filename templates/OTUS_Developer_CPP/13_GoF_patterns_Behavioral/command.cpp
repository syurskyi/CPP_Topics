// Команда (Command)

// vba
// motion capture
// source event ???
// kafka
// binlog (random?)

? |i..
? <vector>

class Document {
    std::s.. text;

public:
    void create()
    {
        std::c__ __  "new document" __  std::e..
        text.clear();
    }

    void new_para(const std::s..& para)
    {
        text +_ para+"\n";
        std::c__ __  "new para " __  para __  std::e..
    }

    void save_as(const std::s..& name)
    {
        std::c__ __  "--- " __  name __  "---" __  std::e..
        std::c__ __  text __  std::e..
    }
};

class Command {
public:
    virtual ~Command() _ default;

    virtual void execute() _ 0;

    virtual void py() _ 0;

protected:
    explicit Command(Document* d)
            :document(d) { }

    Document* document;
};

class NewDocumentCommand : public Command {
public:
    explicit NewDocumentCommand(Document* d)
            :Command(d) { }

    void execute() override
    {
        document->create();
    }

    void py() override
    {
        std::c__ __  "text = []" __  std::e..
    }
};

class ParaCommand : public Command {
    std::s.. text;
public:
    ParaCommand(Document* d, std::s.. text_)
            :Command(d), text(std::move(text_)) { }

    void execute() override
    {
        document->new_para(text);
    }

    void py() override
    {
        std::c__ __  "text.append(\"" __  text __  "\")" __  std::e..
    }
};

class SaveAsCommand : public Command {
    std::s.. fname;
public:
    SaveAsCommand(Document* d, std::s.. fname_)
            :Command(d), fname(std::move(fname_)) { }

    void execute() override
    {
        document->save_as(fname);
    }

    void py() override
    {
        std::c__ __  "with open(\"" __  fname __  """\", \"w\") as f:" __  std::e..
        std::c__ __  "  f.write(\"\\n\".join(text))" __  std::e..
    }
};

in. main(in., c..* [])
{
    Document doc;

    std::vector<Command*> history;
    history.push_back(new NewDocumentCommand(&doc));
    history.push_back(new ParaCommand(&doc, "Manual"));
    history.push_back(new ParaCommand(&doc, ""));
    history.push_back(new ParaCommand(&doc, "Hello, World!"));
    history.push_back(new SaveAsCommand(&doc, "hello.doc"));

    for (auto i: history) {
        i->execute();
    }

    for (auto i: history) {
        i->py();
    }

    r_ 0;
}
