//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2018 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
#ifndef SFML_RECTANGLESHAPE_HPP
#define SFML_RECTANGLESHAPE_HPP
// Headers
#include <SFML/Graphics/Export.hpp>
#include <SFML/Graphics/Shape.hpp>

namespace sf
{
class SFML_GRAPHICS_API RectangleShape : public Shape
{
public:

 explicit RectangleShape(const Vector2f& size = Vector2f(0, 0));

 void setSize(const Vector2f& size);

 const Vector2f& getSize() const;

 virtual std::size_t getPointCount() const;

 virtual Vector2f getPoint(std::size_t index) const;

private:

   // Member data
Vector2f m_size; 
};
} // namespace sf
#endif // SFML_RECTANGLESHAPE_HPP
