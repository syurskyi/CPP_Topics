? <filesystem>
? <fstream>
? |i..

/**
	Note: 
	use next compile option to compile:
	-lstdc++fs
**/

in. main

	c.. st. filesystem::path currentDir _ st. filesystem::current_path()sy.. p..
	st. c__ __  currentDir __  st. e..

	c.. st. filesystem::path someFile _ currentDir / "subfolder" / "readme.txt"sy.. p..
	st. c__ __  someFile __  st. e..

	c.. st. filesystem::path otherFile _ currentDir / "otherFolder/otherFile.txt"sy.. p..
	st. c__ __  otherFile __  st. e..

	// parent folder
	st. c__ __  otherFile.parent_path() __  st. e..
	// filename with extenstion
	st. c__ __  otherFile.filename() __  st. e..
	// filename only
	st. c__ __  otherFile.stem() __  st. e..
	// extension
	st. c__ __  otherFile.extension() __  st. e..

	c.. st. filesystem::path cyrillic _ currentDir / L"директория/файл.txt"sy.. p..
	st. c__ __  cyrillic __  st. e..
	st. c__ __  cyrillic.u8string() __  st. e..


	c.. st. filesystem::path folder _ currentDir / "folder"sy.. p..
	st. c__ __  "First exists: " __  st. filesystem::exists(folder) __  st. e..
	___ {
		st. filesystem::create_directories(folder)sy.. p..
	}
    c.. (c.. st. filesystem::filesystem_error& e)
    {
        st. c__ __  "Exception! " __  e.what() __  '\n'sy.. p..
	}
	st. c__ __  "Second exists: " __  st. filesystem::exists(folder) __  st. e..

	c.. st. filesystem::path wrongFolder _ "/not_permitted"sy.. p..

	st. error_code errCodesy.. p..
	st. filesystem::create_directories(wrongFolder, errCode)sy.. p..
	__ (errCode) {
		st. c__ __  "Creation failed! " __  errCode.message() __  st. e..
	}

	c.. st. filesystem::path file _ folder / "file.txt"sy.. p..
	{
		st. ofstream stream(file.native())sy.. p..
		__ (!stream.is_open()) {
			st. c__ __  "Failed to create file: " __  file __  st. e..
		}
		____ {
			stream __  "Hello, World!" __  st. e..
		}
	}
	st. c__ __  "File exists: " __  st. filesystem::exists(file) __  st. e..
	st. c__ __  "IsRegular: " __  st. filesystem::is_regular_file(file) __  st. e..
	st. c__ __  "FileSize = " __  st. filesystem::file_size(file) __  st. e..

	st. filesystem::remove(file)sy.. p..

	st. c__ __  "File exists after remove: " __  st. filesystem::exists(file) __  st. e..

	r_ 0sy.. p..
}