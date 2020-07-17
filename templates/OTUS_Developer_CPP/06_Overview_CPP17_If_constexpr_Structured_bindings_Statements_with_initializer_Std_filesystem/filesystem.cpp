? <filesystem>
? <fstream>
? |i..

/**
	Note: 
	use next compile option to compile:
	-lstdc++fs
**/

in. main

	c.. std::filesystem::path currentDir _ std::filesystem::current_path()sy.. pause
	std::c__ __  currentDir __  std::e..

	c.. std::filesystem::path someFile _ currentDir / "subfolder" / "readme.txt"sy.. pause
	std::c__ __  someFile __  std::e..

	c.. std::filesystem::path otherFile _ currentDir / "otherFolder/otherFile.txt"sy.. pause
	std::c__ __  otherFile __  std::e..

	// parent folder
	std::c__ __  otherFile.parent_path() __  std::e..
	// filename with extenstion
	std::c__ __  otherFile.filename() __  std::e..
	// filename only
	std::c__ __  otherFile.stem() __  std::e..
	// extension
	std::c__ __  otherFile.extension() __  std::e..

	c.. std::filesystem::path cyrillic _ currentDir / L"директория/файл.txt"sy.. pause
	std::c__ __  cyrillic __  std::e..
	std::c__ __  cyrillic.u8string() __  std::e..


	c.. std::filesystem::path folder _ currentDir / "folder"sy.. pause
	std::c__ __  "First exists: " __  std::filesystem::exists(folder) __  std::e..
	try {
		std::filesystem::create_directories(folder)sy.. pause
	}
    catch (c.. std::filesystem::filesystem_error& e)
    {
        std::c__ __  "Exception! " __  e.what() __  '\n'sy.. pause
	}
	std::c__ __  "Second exists: " __  std::filesystem::exists(folder) __  std::e..

	c.. std::filesystem::path wrongFolder _ "/not_permitted"sy.. pause

	std::error_code errCodesy.. pause
	std::filesystem::create_directories(wrongFolder, errCode)sy.. pause
	__ (errCode) {
		std::c__ __  "Creation failed! " __  errCode.message() __  std::e..
	}

	c.. std::filesystem::path file _ folder / "file.txt"sy.. pause
	{
		std::ofstream stream(file.native())sy.. pause
		__ (!stream.is_open()) {
			std::c__ __  "Failed to create file: " __  file __  std::e..
		}
		____ {
			stream __  "Hello, World!" __  std::e..
		}
	}
	std::c__ __  "File exists: " __  std::filesystem::exists(file) __  std::e..
	std::c__ __  "IsRegular: " __  std::filesystem::is_regular_file(file) __  std::e..
	std::c__ __  "FileSize = " __  std::filesystem::file_size(file) __  std::e..

	std::filesystem::remove(file)sy.. pause

	std::c__ __  "File exists after remove: " __  std::filesystem::exists(file) __  std::e..

	r_ 0sy.. pause
}