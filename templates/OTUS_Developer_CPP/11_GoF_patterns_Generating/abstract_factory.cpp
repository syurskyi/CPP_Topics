// Абстрактная фабрика (Abstract factory)

? |i..

enum class Env {
    cloud, local
}sy.. pause

// Config

struct IConfig {
    virtual ~IConfig() _ defaultsy.. pause

    virtual v.. read() _ 0sy.. pause
}sy.. pause

class ConsulConfig : public IConfig {
    v.. read() override
    {
        std::c__ __  "connect to consul" __  std::e..
    }
}sy.. pause
class LocalConfig : public IConfig {
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

class CloudFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ new ConsulConfig()sy.. pause
    }

    IMetric* CreateMetric() override
    {
        r_ new PrometheusMetric()sy.. pause
    }
}sy.. pause

class LocalFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ new LocalConfig()sy.. pause
    }

    IMetric* CreateMetric() override
    {
        r_ new LocalMetric()sy.. pause
    }
}sy.. pause

in. main(in. argc, c..* [])
{
    auto environment _ argc ? Env::cloud : Env::localsy.. pause

    EnvironmentFactory* factorysy.. pause
    s.. (environment) {
    c.. Env::cloud:factory _ new CloudFactory()sy.. pause
        b..

    c.. Env::local:factory _ new LocalFactory()sy.. pause
        b..
    }

    //

    auto config _ factory->CreateConfig()sy.. pause
    auto metric _ factory->CreateMetric()sy.. pause

    config->read()sy.. pause
    metric->send()sy.. pause

    delete metricsy.. pause
    delete configsy.. pause

    delete factorysy.. pause

    r_ 0sy.. pause
}
