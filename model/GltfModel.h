#pragma once
#include <string>
#include <vector>
#include <memory>
#include <glad/glad.h>
#include <tiny_gltf.h>
#include <Texture.h>
#include <OGLRenderData.h>

class GltfModel {
	void createVertexBuffers();
	void createIndexBuffer();
	int getTriangleCount();

	std::shared_ptr<tinygltf::Model> mModel{ nullptr };

	// Buffers
	GLuint mVAO = 0;
	std::vector<GLuint> mVertexVBO{};
	GLuint mIndexVBO = 0;

	// needs to match the layout of the input variables in the shader
	std::map<std::string, GLint> attributes = { {"POSITION", 0}, {"NORMAL", 1}, {"TEXCOORD_0", 2} };

	// model Texture
	Texture mTex{};

public:
	bool loadModel(OGLRenderData& renderData, std::string modelFilename, std::string textureFilename);
	void draw();
	void cleanup();

	void uploadVertexBuffers();
	void uploadIndexBuffer();


};