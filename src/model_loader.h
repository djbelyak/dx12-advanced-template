#pragma once

#include "dx12_labs.h"

class ModelLoader
{
public:
	ModelLoader();
	~ModelLoader();

	HRESULT LoadModel(std::string path_to_model);

	const FullVertex* GetVertexBuffer() const;
	const UINT GetVertexBufferSize() const;
	const UINT GetVertexNum() const;
protected:

	std::vector<FullVertex> verteces;

	std::string model_dir;
};