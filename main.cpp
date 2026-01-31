#include <logger/logger.h>

int main() {
    auto logger = Logger("main", "logs", "main.log", true);

    logger.log("Starting logger...", LOGGER::LEVEL::INFO);
    std::cout << "Hello, World!\n";
    logger.log("Stopping logger...", LOGGER::LEVEL::INFO);

    logger.exit_logger();
    return 0;
}
