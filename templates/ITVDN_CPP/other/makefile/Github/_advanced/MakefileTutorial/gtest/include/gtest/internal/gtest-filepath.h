// Copyright 2008, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//
// Google Test filepath utilities
//
// 007_This header file declares classes and functions used internally by
// Google Test.  They are subject to change without notice.
//
// 007_This file is #included in gtest/internal/gtest-internal.h.
// Do not include this header file separately!

?i.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
_de.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

? "gtest/internal/gtest-string.h"

n... testing {
n... internal {

// FilePath - a class for file and directory pathname manipulation which
// handles platform-specific conventions (like the pathname separator).
// Used for helper functions for naming files in a directory for xml output.
// Except for Set methods, all methods are const or static, which provides an
// "immutable value object" -- useful for peace of mind.
// A FilePath with a value ending in a path separator ("like/this/") represents
// a directory, otherwise it is assumed to represent a file. In either case,
// it may or may not represent an actual file or directory in the file system.
// Names are NOT checked for syntax correctness -- no checking for illegal
// characters, malformed paths, etc.

n.. GTEST_API_ FilePath {
 p..
  FilePath() : pathname_("") { }
  FilePath(co.. FilePath& rhs) : pathname_(rhs.pathname_) { }

  ex__ FilePath(co.. st. st..& pathname) : pathname_(pathname) {
    Normalize();
  }

  FilePath& operator=(co.. FilePath& rhs) {
    Set(rhs);
    ?  *this;
  }

  v.. Set(co.. FilePath& rhs) {
    pathname_ = rhs.pathname_;
  }

  co.. st. st..& st..() co.. { ?  pathname_; }
  co.. ch..* c_str() co.. { ?  pathname_.c_str(); }

  // Returns the current working directory, or "" if unsuccessful.
  st.. FilePath GetCurrentDir();

  // Given directory = "dir", base_name = "test", number = 0,
  // extension = "xml", returns "dir/test.xml". If number is greater
  // than zero (e.g., 12), returns "dir/test_12.xml".
  // On Windows platform, uses \ as the separator rather than /.
  st.. FilePath MakeFileName(co.. FilePath& directory,
                               co.. FilePath& base_name,
                               in. number,
                               co.. ch..* extension);

  // Given directory = "dir", relative_path = "test.xml",
  // returns "dir/test.xml".
  // On Windows, uses \ as the separator rather than /.
  st.. FilePath ConcatPaths(co.. FilePath& directory,
                              co.. FilePath& relative_path);

  // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  st.. FilePath GenerateUniqueFileName(co.. FilePath& directory,
                                         co.. FilePath& base_name,
                                         co.. ch..* extension);

  // Returns true iff the path is "".
  bo.. IsEmpty() co.. { ?  pathname_.empty(); }

  // If input name has a trailing separator character, removes it and returns
  // the name, otherwise return the name string unmodified.
  // On Windows platform, uses \ as the separator, other platforms use /.
  FilePath RemoveTrailingPathSeparator() co..;

  // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath("path/to/file").RemoveDirectoryName() returns
  // FilePath("file"). If there is no directory part ("just_a_file"), it returns
  // the FilePath unmodified. If there is no file part ("just_a_dir/") it
  // returns an empty FilePath ("").
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() co..;

  // RemoveFileName returns the directory path with the filename removed.
  // Example: FilePath("path/to/file").RemoveFileName() returns "path/to/".
  // If the FilePath is "a_file" or "/a_file", RemoveFileName returns
  // FilePath("./") or, on Windows, FilePath(".\\"). If the filepath does
  // not have a file, like "just/a/dir/", it returns the FilePath unmodified.
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveFileName() co..;

  // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath("dir/file.exe").RemoveExtension("EXE") returns
  // FilePath("dir/file"). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(co.. ch..* extension) co..;

  // Creates directories so that path exists. Returns true if successful or if
  // the directories already exist; returns false if unable to create
  // directories for any reason. Will also return false if the FilePath does
  // not represent a directory (that is, it doesn't end with a path separator).
  bo.. CreateDirectoriesRecursively() co..;

  // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named "CreateDirectory" because that's a macro on Windows.
  bo.. CreateFolder() co..;

  // Returns true if FilePath describes something in the file-system,
  // either a file, directory, or whatever, and that something exists.
  bo.. FileOrDirectoryExists() co..;

  // Returns true if pathname describes a directory in the file-system
  // that exists.
  bo.. DirectoryExists() co..;

  // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // 007_This does NOT check that a directory (or file) actually exists.
  bo.. IsDirectory() co..;

  // Returns true if pathname describes a root directory. (Windows has one
  // root directory per disk drive.)
  bo.. IsRootDirectory() co..;

  // Returns true if pathname describes an absolute path.
  bo.. IsAbsolutePath() co..;

 pr..
  // Replaces multiple consecutive separators with a single separator.
  // For example, "bar///foo" becomes "bar/foo". Does not eliminate other
  // redundancies that might be in a pathname involving "." or "..".
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing "/". Then elsewhere that
  // pathname may have another "/" and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like "foo//bar"
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example "bar\\/\\foo" becomes
  // "bar\\foo".

  v.. Normalize();

  // Returns a pointer to the last occurence of a valid path separator in
  // the FilePath. On Windows, for example, both '/' and '\' are valid path
  // separators. Returns NULL if no path separator was found.
  co.. ch..* FindLastPathSeparator() co..;

  st. st.. pathname_;
};  // class FilePath

}  // namespace internal
}  // namespace testing

e..  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_
