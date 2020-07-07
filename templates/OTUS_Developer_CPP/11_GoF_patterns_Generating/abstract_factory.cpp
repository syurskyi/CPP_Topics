// Абстрактная фабрика (Abstract factory)

? |i..

enum class Env {
    cloud, local
};

// Config

struct IConfig {
    virtual ~IConfig() _ default;

    virtual v.. read() _ 0;
};

class ConsulConfig : public IConfig {
    v.. read() override
    {
        std::c__ __  "connect to consul" __  std::e..
    }
};
class LocalConfig : public IConfig {
    v.. read() override
    {
        std::c__ __  "open local file" __  std::e..
    }
};

// Metric

struct IMetric {
    virtual ~IMetric() _ default;

    virtual v.. send() _ 0;
};

struct PrometheusMetric : public IMetric {
    v.. send() override
    {
        std::c__ __  "push to prometheus" __  std::e..
    }
};

struct LocalMetric : public IMetric {
    v.. send() override
    {
        std::c__ __  "write to log" __  std::e..
    }
};

//

struct EnvironmentFactory {
    virtual ~EnvironmentFactory() _ default;

    virtual IConfig* CreateConfig() _ 0;
    virtual IMetric* CreateMetric() _ 0;
};

class CloudFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ new ConsulConfig();
    }

    IMetric* CreateMetric() override
    {
        r_ new PrometheusMetric();
    }
};

class LocalFactory : public EnvironmentFactory {
    IConfig* CreateConfig() override
    {
        r_ new LocalConfig();
    }

    IMetric* CreateMetric() override
    {
        r_ new LocalMetric();
    }
};

in. main(in. argc, c..* [])
{
    auto environment _ argc ? Env::cloud : Env::local;

    EnvironmentFactory* factory;
    s.. (environment) {
    c.. Env::cloud:factory _ new CloudFactory();
        b..

    c.. Env::local:factory _ new LocalFactory();
        b..
    }

    //

    auto config _ factory->CreateConfig();
    auto metric _ factory->CreateMetric();

    config->read();
    metric->send();

    delete metric;
    delete config;

    delete factory;

    r_ 0;
}
