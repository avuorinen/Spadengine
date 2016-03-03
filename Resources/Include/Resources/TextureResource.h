#pragma once
#include "Resources/Resource.h"
#include "Core/Math.h"

#include "stb_image.h"

namespace sge
{
	class TextureResource : public sge::Resource
	{
	public:
		TextureResource(const std::string& resourcePath);
		~TextureResource();

		void bind();
		sge::math::ivec2 getSize();

		std::string getTypeName();
		void setTypename(const std::string& typeName);

	private:
		int width, height, comp;
		std::string typeName;
		unsigned char* data;
	};
}