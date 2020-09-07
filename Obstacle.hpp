#pragma once

#include "GL.hpp"
#include <glm/glm.hpp>

#include <vector>

struct Obstacle{
    Obstacle();
    Obstacle(glm::vec2 &pos);
    Obstacle(glm::vec2 &pos, glm::vec2 &dimension);
    ~Obstacle();

    glm::vec2 center;
    glm::vec2 radius = glm::vec2(0.25f, 0.25f);
    glm::u8vec4 color;
};

