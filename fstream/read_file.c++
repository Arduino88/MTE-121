int main() {
    // Open the file
    std::ifstream file("words.txt");

    // Check if the file opened successfully
    if (!file.is_open()) {
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;

    // Read the file line by line
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    return 0;
}
