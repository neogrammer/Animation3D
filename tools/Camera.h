#pragma once

#include <glm/glm.hpp>
#include <OGLRenderData.h>

class Camera
{
	glm::vec3 mViewDirection = glm::vec3(0.f, 0.f, 0.f);
	glm::vec3 mWorldUpVector = glm::vec3(0.f, 1.f, 0.f);

	glm::vec3 mRightDirection = glm::vec3(0.f, 0.f, 0.f);
	glm::vec3 mUpDirection = glm::vec3(0.f, 0.f, 0.f);

public:
	glm::mat4 getViewMatrix(OGLRenderData& renderData);
};

