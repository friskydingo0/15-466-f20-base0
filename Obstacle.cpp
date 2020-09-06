#pragma once

#include "Obstacle.hpp"

Obstacle::Obstacle(){
    center = glm::vec2(0.0f, 0.0f);
}

Obstacle::Obstacle(glm::vec2 &pos, glm::vec2 &dimension){
    center = pos;
    size = dimension;
}

Obstacle::~Obstacle(){
    // Cleanup
}