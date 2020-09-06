#pragma once

#include "GL.hpp"
#include <glm/glm.hpp>

#include <vector>

struct Obstacle{
    Obstacle();
    Obstacle(glm::vec2 &pos, glm::vec2 &dimension);
    ~Obstacle();

    glm::vec2 center;
    glm::vec2 size = glm::vec2(0.5f, 0.5f);
};

