? <filesystem>
? <fstream>
? |i..

/**
	Note: 
	use next compile option to compile:
	-lstdc++fs
**/

in. main() {

	const std::filesystem::path currentDir = std::filesystem::current_path();
	std::c__ __  currentDir __  std::e..

	const std::filesystem::path someFile = currentDir / "subfolder" / "readme.txt";
	std::c__ __  someFile __  std::e..

	const std::filesystem::path otherFile = currentDir / "otherFolder/otherFile.txt";
	std::c__ __  otherFile __  std::e..

	// parent folder
	std::c__ __  otherFile.parent_path() __  std::e..
	// filename with extenstion
	std::c__ __  otherFile.filename() __  std::e..
	// filename only
	std::c__ __  otherFile.stem() __  std::e..
	// extension
	std::c__ __  otherFile.extension() __  std::e..

	const std::filesystem::path cyrillic = currentDir / L"директория/файл.txt";
	std::c__ __  cyrillic __  std::e..
	std::c__ __  cyrillic.u8string() __  std::e..


	const std::filesystem::path folder = currentDir / "folder";
	std::c__ __  "First exists: " __  std::filesystem::exists(folder) __  std::e..
	try {
		std::filesystem::create_directories(folder);
	}
    catch (const std::filesystem::filesystem_error& e)
    {
        std::c__ __  "Exception! " __  e.what() __  '\n';
	}
	std::c__ __  "Second exists: " __  std::filesystem::exists(folder) __  std::e..

	const std::filesystem::path wrongFolder = "/not_permitted";

	std::error_code errCode;
	std::filesystem::create_directories(wrongFolder, errCode);
	if (errCode) {
		std::c__ __  "Creation failed! " __  errCode.message() __  std::e..
	}

	const std::filesystem::path file = folder / "file.txt";
	{
		std::ofstream stream(file.native());
		if (!stream.is_open()) {
			std::c__ __  "Failed to create file: " __  file __  std::e..
		}
		else {
			stream __  "Hello, World!" __  std::e..
		}
	}
	std::c__ __  "File exists: " __  std::filesystem::exists(file) __  std::e..
	std::c__ __  "IsRegular: " __  std::filesystem::is_regular_file(file) __  std::e..
	std::c__ __  "FileSize = " __  std::filesystem::file_size(file) __  std::e..

	std::filesystem::remove(file);

	std::c__ __  "File exists after remove: " __  std::filesystem::exists(file) __  std::e..

	r_ 0;
}