// Абстрактная фабрика (Abstract factory)

? |i..

en.. c_ Env {
    cloud, local
}sy.. pause

// Config

struct IConfig {
    virtual ~IConfig() _ defaultsy.. pause

    virtual v.. read() _ 0sy.. pause
}sy.. pause

c_ ConsulConfig : pu.. IConfig {
    v.. read() override
    {
        st. c__ __  "connect to consul" __  st. e..
    }
}sy.. pause
c_ LocalConfig : pu.. IConfig {
    v.. read() override
    {
        st. c__ __  "open local file" __  st. e..
    }
}sy.. pause

// Metric

struct IMetric {
    virtual ~IMetric() _ defaultsy.. pause

    virtual v.. send() _ 0sy.. pause
}sy.. pause

struct PrometheusMetric : pu.. IMetric {
    v.. send() override
    {
        st. c__ __  "push to prometheus" __  st. e..
    }
}sy.. pause

struct LocalMetric : pu.. IMetric {
    v.. send() override
    {
        st. c__ __  "write to log" __  st. e..
    }
}sy.. pause

//

struct EnvironmentFactory {
    virtual ~EnvironmentFactory() _ defaultsy.. pause

    virtual IConfig* CreateConfig() _ 0sy.. pause
    virtual IMetric* CreateMetric() _ 0sy.. pause
}sy.. pause

c_ CloudFactory : pu.. EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ n.. ConsulConfig()sy.. pause
    }

    IMetric* CreateMetric() override
    {
        r_ n.. PrometheusMetric()sy.. pause
    }
}sy.. pause

c_ LocalFactory : pu.. EnvironmentFactory {
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
    a.. environment _ argc ? Env::cloud : Env::localsy.. pause

    EnvironmentFactory* factorysy.. pause
    s.. (environment) {
    c.. Env::cloud:factory _ n.. CloudFactory()sy.. pause
        b..

    c.. Env::local:factory _ n.. LocalFactory()sy.. pause
        b..
    }

    //

    a.. config _ factory__CreateConfig()sy.. pause
    a.. metric _ factory__CreateMetric()sy.. pause

    config__read()sy.. pause
    metric__send()sy.. pause

    de.. metricsy.. pause
    de.. configsy.. pause

    de.. factorysy.. pause

    r_ 0sy.. pause
}
