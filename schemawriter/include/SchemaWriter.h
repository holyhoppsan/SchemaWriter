#pragma once

namespace SchemaWriter
{
class SchemaWriter
{
  public:
    SchemaWriter() = default;
    ~SchemaWriter() = default;

    void Write(char *fileName);
};
} // namespace SchemaWriter