#include "game.hh"
#include <chrono>
#include <iostream>

Game::Game(const GameConfig& cfg)
  : players(cfg.get_players()), turn_index(0), gameover(false){
    
  }

void Game::start(){
  turn_index = 0;
}

void Game::next_turn(){
  turn_index++;
}

const Player& Game::get_current_player() const{
  return players[turn_index % players.size()];
}

