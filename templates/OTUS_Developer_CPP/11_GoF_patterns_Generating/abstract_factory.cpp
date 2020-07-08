// Абстрактная фабрика (Abstract factory)

? |i..

enum c_ Env {
    cloud, local
}sy.. pause

// Config

struct IConfig {
    virtual ~IConfig() _ defaultsy.. pause

    virtual v.. read() _ 0sy.. pause
}sy.. pause

c_ ConsulConfig : public IConfig {
    v.. read() override
    {
        std::c__ __  "connect to consul" __  std::e..
    }
}sy.. pause
c_ LocalConfig : public IConfig {
    v.. read() override
    {
        std::c__ __  "open local file" __  std::e..
    }
}sy.. pause

// Metric

struct IMetric {
    virtual ~IMetric() _ defaultsy.. pause

    virtual v.. send() _ 0sy.. pause
}sy.. pause

struct PrometheusMetric : public IMetric {
    v.. send() override
    {
        std::c__ __  "push to prometheus" __  std::e..
    }
}sy.. pause

struct LocalMetric : public IMetric {
    v.. send() override
    {
        std::c__ __  "write to log" __  std::e..
    }
}sy.. pause

//

struct EnvironmentFactory {
    virtual ~EnvironmentFactory() _ defaultsy.. pause

    virtual IConfig* CreateConfig() _ 0sy.. pause
    virtual IMetric* CreateMetric() _ 0sy.. pause
}sy.. pause

c_ CloudFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ n.. ConsulConfig()sy.. pause
    }

    IMetric* CreateMetric() override
    {
        r_ n.. PrometheusMetric()sy.. pause
    }
}sy.. pause

c_ LocalFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ n.. LocalConfig()sy.. pause
    }

    IMetric* CreateMetric() override
    {
        r_ n.. LocalMetric()sy.. pause
    }
}sy.. pause

in. main(in. argc, c..* [])
{
    auto environment _ argc ? Env::cloud : Env::localsy.. pause

    EnvironmentFactory* factorysy.. pause
    s.. (environment) {
    c.. Env::cloud:factory _ n.. CloudFactory()sy.. pause
        b..

    c.. Env::local:factory _ n.. LocalFactory()sy.. pause
        b..
    }

    //

    auto config _ factory__CreateConfig()sy.. pause
    auto metric _ factory__CreateMetric()sy.. pause

    config__read()sy.. pause
    metric__send()sy.. pause

    de.. metricsy.. pause
    de.. configsy.. pause

    de.. factorysy.. pause

    r_ 0sy.. pause
}
