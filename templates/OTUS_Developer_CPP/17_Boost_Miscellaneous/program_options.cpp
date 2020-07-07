// Program Options

? <boost/program_options.hpp>
? |i..

namespace po _ boost::program_options;

void set_bulk(size_t bulk) {
    std::c__ __  "bulk size is " __  bulk __  std::e..
}

in. main(in. argc, const char *argv[]) {
    try {
        po::options_description desc{"Options"};
        desc.add_options()
                ("help,h", "This screen")
                ("config", po::value<std::s..>()->default_value("app.yaml"), "config filename")
                ("bulk", po::value<size_t>()->default_value(5)->notifier(set_bulk), "bulk size");

        po::variables_map vm;
        store(parse_command_line(argc, argv, desc), vm);
        notify(vm);

        __ (vm.count("help"))
            std::c__ __  desc __  '\n';
        ____ __ (vm.count("config"))
            std::c__ __  "readfrom: " __  vm["config"].as<std::s..>() __  std::e..
        ____ __ (vm.count("bulk"))
            std::c__ __  "bulk: " __  vm["bulk"].as<size_t>() __  std::e..
    }
    catch (const std::exception &e) {
        std::cerr __  e.what() __  std::e..
    }
}
