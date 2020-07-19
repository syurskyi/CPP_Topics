// Абстрактная фабрика (Abstract factory)

? |i..

en.. c_ Env {
    cloud, local
}sy.. p..

// Config

st.. IConfig {
    v.. ~IConfig() _ defaultsy.. p..

    v.. v.. read() _ 0sy.. p..
}sy.. p..

c_ ConsulConfig : pu.. IConfig {
    v.. read() ov..
    {
        st. c__ __  "connect to consul" __  st. e..
    }
}sy.. p..
c_ LocalConfig : pu.. IConfig {
    v.. read() ov..
    {
        st. c__ __  "open local file" __  st. e..
    }
}sy.. p..

// Metric

st.. IMetric {
    v.. ~IMetric() _ defaultsy.. p..

    v.. v.. send() _ 0sy.. p..
}sy.. p..

st.. PrometheusMetric : pu.. IMetric {
    v.. send() ov..
    {
        st. c__ __  "push to prometheus" __  st. e..
    }
}sy.. p..

st.. LocalMetric : pu.. IMetric {
    v.. send() ov..
    {
        st. c__ __  "write to log" __  st. e..
    }
}sy.. p..

//

st.. EnvironmentFactory {
    v.. ~EnvironmentFactory() _ defaultsy.. p..

    v.. IConfig* CreateConfig() _ 0sy.. p..
    v.. IMetric* CreateMetric() _ 0sy.. p..
}sy.. p..

c_ CloudFactory : pu.. EnvironmentFactory {
    IConfig* CreateConfig() ov..
    {
        r_ n.. ConsulConfig()sy.. p..
    }

    IMetric* CreateMetric() ov..
    {
        r_ n.. PrometheusMetric()sy.. p..
    }
}sy.. p..

c_ LocalFactory : pu.. EnvironmentFactory {
    IConfig* CreateConfig() ov..
    {
        r_ n.. LocalConfig()sy.. p..
    }

    IMetric* CreateMetric() ov..
    {
        r_ n.. LocalMetric()sy.. p..
    }
}sy.. p..

in. main(in. argc, c..* [])
{
    a.. environment _ argc ? Env::cloud : Env::localsy.. p..

    EnvironmentFactory* factorysy.. p..
    s.. (environment) {
    c.. Env::cloud:factory _ n.. CloudFactory()sy.. p..
        b..

    c.. Env::local:factory _ n.. LocalFactory()sy.. p..
        b..
    }

    //

    a.. config _ factory__CreateConfig()sy.. p..
    a.. metric _ factory__CreateMetric()sy.. p..

    config__read()sy.. p..
    metric__send()sy.. p..

    de.. metricsy.. p..
    de.. configsy.. p..

    de.. factorysy.. p..

    r_ 0sy.. p..
}
