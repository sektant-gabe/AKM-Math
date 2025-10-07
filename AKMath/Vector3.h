#ifndef AKM_VECTOR3_H
#define AKM_VECTOR3_H

#include <iostream>

namespace AKM
{
    class Vector3
    {
    public:
        // Vector Data
        union
        {
            double data[3];

            struct
            {
                double x, y, z;
            };
        };

        // Constructors
        Vector3();

        explicit Vector3(double val);

        Vector3(double x, double y, double z);

        explicit Vector3(const double data[3]);

        // Operator Assignments (Vector)
        Vector3& operator+=(const Vector3& rhs);

        Vector3& operator-=(const Vector3& rhs);

        Vector3& operator*=(const Vector3& rhs);

        Vector3& operator/=(const Vector3& rhs);

        // Operator Assignments (Scalar)
        Vector3& operator+=(double s);

        Vector3& operator-=(double s);

        Vector3& operator*=(double s);

        Vector3& operator/=(double s);

        // Special Object Creators
        // static const Vector3 xAxis();

        // static const Vector3 yAxis();

        // static const Vector3 zAxis();
    };

    // Vector / Vector Elementwise Operations
    Vector3 operator-(const Vector3& rhs);

    Vector3 operator+(const Vector3& lhs, const Vector3& rhs);

    Vector3 operator-(const Vector3& lhs, const Vector3& rhs);

    Vector3 operator*(const Vector3& lhs, const Vector3& rhs);

    Vector3 operator/(const Vector3& lhs, const Vector3& rhs);

    // Vector / scalar operations
    Vector3 operator+(const Vector3& lhs, double s);

    Vector3 operator-(const Vector3& lhs, double s);

    Vector3 operator*(const Vector3& lhs, double s);

    Vector3 operator/(const Vector3& lhs, double s);

    Vector3 operator+(double s, const Vector3& rhs);

    Vector3 operator-(double s, const Vector3& rhs);

    Vector3 operator*(double s, const Vector3& rhs);

    Vector3 operator/(double s, const Vector3& rhs);

    // Vector Operations
    double norm(const Vector3& rhs);

    void normalize(Vector3& rhs);

    Vector3 unit(const Vector3& rhs);

    Vector3 cross(const Vector3& lhs, const Vector3& rhs);

    double dot(const Vector3& lhs, const Vector3& rhs);

    // Stream Functions
    std::ostream& operator<<(std::ostream& os, const Vector3& obj);
} // namespace AKM

#endif // AKM_VECTOR3_H
