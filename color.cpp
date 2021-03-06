#include "color.h"

Color Color::defaultColor = Color("Default Color", "nil", QColor("#000000"));

Color::Color()
    : parent_(NULL)
{
  
}

Color::Color(const QString &name, const QString &id, const QColor &color)
    : parent_(NULL), id_(id), name_(name), color_(color)
{
  brush_ = QBrush(color_);
}

Color::Color(const Color &other)
{
  parent_ = other.parent();
  id_ = other.id();
  name_ = other.name();
  color_ = other.color();
  brush_ = QBrush(color_);
}

Color::~Color()
{
  
}

Color& Color::operator=(const Color &other)
{
  parent_ = other.parent();
  id_ = other.id();
  name_ = other.name();
  color_ = other.color();
  brush_ = QBrush(color_);

  return *this;
}
