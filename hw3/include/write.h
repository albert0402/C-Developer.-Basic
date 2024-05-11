#pragma once

#include <fstream>
#include <iostream>
#include <string>

void writeHighScore(const std::string& high_scores_filename, const std::string& user_name, int max_value);
