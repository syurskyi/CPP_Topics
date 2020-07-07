? "lib.h"

? <spdlog/spdlog.h>

in. main()
{
    auto logger _ spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());

    r_ 0;
}
