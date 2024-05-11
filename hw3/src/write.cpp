#include "../include/write.h"
#include "../include/game.h"

void writeHighScore(const std::string& high_scores_filename, const std::string& user_name, int max_value) {
    std::ofstream out_file(high_scores_filename, std::ios_base::app);
    if (!out_file.is_open()) {
        std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
        return;
    }

    out_file << user_name << ' ' << guess_game(max_value) << std::endl;
}