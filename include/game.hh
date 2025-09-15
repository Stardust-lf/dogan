#include "config.hh"

class Game {
public:
    Game(const GameConfig& cfg);

    void start();
    void next_turn();
    // void roll_dice();
    // void build_road(int player_id, ...);
    // void trade(int from, int to, ...);

    const Player& get_current_player() const;
    bool is_over() const;

private:
    std::vector<Player> players;
    unsigned int turn_index;
    bool gameover;
};
