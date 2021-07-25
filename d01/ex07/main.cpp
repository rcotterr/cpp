#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


std::string string_replace_all(std::string file_content, std::string s1, std::string s2) {
	std::string str_new;
	str_new = file_content;
	int pos = 0;
	int len_s1 = s1.length();
	int index_start = file_content.find(s1, pos);
	while (index_start >= 0) {
		str_new = str_new.replace(index_start, len_s1, s2);
		pos = index_start + len_s1;
		index_start = file_content.find(s1, pos);
	}
	return str_new;
}


void replace(std::string file_name, std::string s1, std::string s2) {

	std::string file_content;
	std::ifstream ifs(file_name);
	std::getline(ifs, file_content, '\0' );
	ifs.close();

	std::string str_new = string_replace_all(file_content, s1, s2);

	std::stringstream replace_file_name;
	replace_file_name << file_name << ".replace";

	std::ofstream ofs(replace_file_name.str());
	ofs << str_new;
    ofs.close();
}


int main() {
    std::string s1 = "abc";
    std::string s2 = "def";

	std::string file_name = "file";
	replace(file_name, s1, s2);
}