/*! \file Triangle.h
    \brief Declaration of the base class Triangle and its derived classes
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

using namespace std;

/// @class Triangle
/// @brief An abstract base class for triangles
class Triangle {
protected:
    float sides[3];

public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    Triangle();
    Triangle(float s1, float s2, float s3);
    Triangle(const Triangle &other);
    virtual ~Triangle();
    /// @}

    /// @name OPERATORS
    /// @{
    Triangle& operator=(const Triangle &other);
    bool operator==(const Triangle &other);
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init(float s1, float s2, float s3);
    virtual void Reset();
    /// @}

    /// @name GETTERS
    /// @{
    virtual float GetPerimeter() const;
    virtual void GetSides(float &s1, float &s2, float &s3) const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void ErrorMessage(const char *string) const;
    virtual void WarningMessage(const char *string) const;
    virtual void Dump() const;
    /// @}
};

/// @class IsoscelesTriangle
/// @brief A class representing an isosceles triangle
class IsoscelesTriangle : public Triangle {
public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    IsoscelesTriangle();
    IsoscelesTriangle(float base, float side);
    IsoscelesTriangle(const IsoscelesTriangle &other);
    virtual ~IsoscelesTriangle();
    /// @}

    /// @name BASIC HANDLING
    /// @{
    virtual void Reset() override;
    /// @}

    /// @name GETTERS
    /// @{
    virtual float GetPerimeter() const override;
    virtual void GetSides(float &base, float &side) const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump() const override;
    /// @}
};

/// @class EquilateralTriangle
/// @brief A class representing an equilateral triangle
class EquilateralTriangle : public Triangle {
public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    EquilateralTriangle();
    EquilateralTriangle(float side);
    EquilateralTriangle(const EquilateralTriangle &other);
    virtual ~EquilateralTriangle();
    /// @}

    /// @name BASIC HANDLING
    /// @{
    virtual void Reset() override;
    /// @}

    /// @name GETTERS
    /// @{
    virtual float GetPerimeter() const override;
    virtual void GetSide(float &side) const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump() const override;
    /// @}
};

/// @class ScaleneTriangle
/// @brief A class representing a scalene triangle
class ScaleneTriangle : public Triangle {
public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    ScaleneTriangle();
    ScaleneTriangle(float s1, float s2, float s3);
    ScaleneTriangle(const ScaleneTriangle &other);
    virtual ~ScaleneTriangle();
    /// @}

    /// @name BASIC HANDLING
    /// @{
    virtual void Reset() override;
    /// @}

    /// @name GETTERS
    /// @{
    virtual float GetPerimeter() const override;
    virtual void GetSides(float &s1, float &s2, float &s3) const;
    /// @}

    /// @name DEBUG and SERIALIZATION
    /// @{
    virtual void Dump() const override;
    /// @}
};

#endif
