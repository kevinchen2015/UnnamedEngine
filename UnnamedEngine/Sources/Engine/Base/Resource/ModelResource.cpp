#include "ModelResource.h"

#include <glm/glm.hpp>

#include "Formats/ModelLoader.h"
#include "Engine/Base/Resource/MaterialResource.h"
#include "Engine/Base/Resource/ResourceType.h"
#include "Engine/Base/Resource/ResourceManager.h"


ModelResource::ModelResource(URI uri) : 
	Resource(uri),
	mReady(false)
{
}

bool ModelResource::IsReady() const
{
	return(mReady);
}

const MeshData& ModelResource::GetMeshes() const
{
	return(mData);
}

void ModelResource::Load(Ptr<ResourceManager> manager)
{
	const auto model = ModelLoader::LoadModel(GetURI());
}

