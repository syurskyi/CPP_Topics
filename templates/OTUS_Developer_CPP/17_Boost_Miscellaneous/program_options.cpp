// Program Options

? <boost/program_options.hpp>
? |i..

n.. po _ boost::program_optionssy.. p..

v.. set_bulk(size_t bulk) {
    st. c__ __  "bulk size is " __  bulk __  st. e..
}

in. main(in. argc, c.. c.. *argv[]) {
    ___ {
        po::options_description desc{"Options"}
        desc.add_options()
                ("help,h", "007_This screen")
                ("config", po::value<st. s..>()__default_value("app.yaml"), "config filename")
                ("bulk", po::value<size_t>()__default_value(5)__notifier(set_bulk), "bulk size")

        po::variables_map vmsy.. p..
        store(parse_command_line(argc, argv, desc), vm)
        notify(vm)

        __ (vm.count("help"))
            st. c__ __  desc __  '\n'
        ____ __ (vm.count("config"))
            st. c__ __  "readfrom: " __  vm["config"].as<st. s..>() __  st. e..
        ____ __ (vm.count("bulk"))
            st. c__ __  "bulk: " __  vm["bulk"].as<size_t>() __  st. e..
    }
    c.. (c.. st. exception &e) {
        st. cerr __  e.what() __  st. e..
    }
}
