// Абстрактная фабрика (Abstract factory)

? |i..

en.. c_ Env {
    cloud, local
}

// Config

st.. IConfig {
    v.. ~IConfig() _ defaultsy.. p..

    v.. v.. read() _ 0sy.. p..
}

c_ ConsulConfig : pu.. IConfig {
    v.. read() ov..
    {
        st. c__ __  "connect to consul" __  st. e..
    }
}
c_ LocalConfig : pu.. IConfig {
    v.. read() ov..
    {
        st. c__ __  "open local file" __  st. e..
    }
}

// Metric

st.. IMetric {
    v.. ~IMetric() _ defaultsy.. p..

    v.. v.. send() _ 0sy.. p..
}

st.. PrometheusMetric : pu.. IMetric {
    v.. send() ov..
    {
        st. c__ __  "push to prometheus" __  st. e..
    }
}

st.. LocalMetric : pu.. IMetric {
    v.. send() ov..
    {
        st. c__ __  "write to log" __  st. e..
    }
}

//

st.. EnvironmentFactory {
    v.. ~EnvironmentFactory() _ defaultsy.. p..

    v.. IConfig* CreateConfig() _ 0sy.. p..
    v.. IMetric* CreateMetric() _ 0sy.. p..
}

c_ CloudFactory : pu.. EnvironmentFactory {
    IConfig* CreateConfig() ov..
    {
        r_ n.. ConsulConfig()
    }

    IMetric* CreateMetric() ov..
    {
        r_ n.. PrometheusMetric()
    }
}

c_ LocalFactory : pu.. EnvironmentFactory {
    IConfig* CreateConfig() ov..
    {
        r_ n.. LocalConfig()
    }

    IMetric* CreateMetric() ov..
    {
        r_ n.. LocalMetric()
    }
}

in. main(in. argc, c..* [])
{
    a.. environment _ argc ? Env::cloud : Env::localsy.. p..

    EnvironmentFactory* factorysy.. p..
    s.. (environment) {
    c.. Env::cloud:factory _ n.. CloudFactory()
        b..

    c.. Env::local:factory _ n.. LocalFactory()
        b..
    }

    //

    a.. config _ factory__CreateConfig()
    a.. metric _ factory__CreateMetric()

    config__read()
    metric__send()

    de.. metricsy.. p..
    de.. configsy.. p..

    de.. factorysy.. p..

    r_ 0sy.. p..
}
