#ifndef TOOLS_PASS_FIREFOX_H
#define TOOLS_PASS_FIREFOX_H

#include <cstdio>
#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <fstream>
#include <streambuf>
#include <string>

namespace fs = std::filesystem;

class ToolsPassFirefox {
  public:
    ToolsPassFirefox();
    std::string home, file, src, des, tmp,
      filepass, passfirefox;

    void make_dir_files();
    std::string get_filename( std::string );
    bool fake_zlib();
    bool fake_gpgme( int , std::string );
    void sabe_file();
    bool export_file( std::string );
};

#endif
