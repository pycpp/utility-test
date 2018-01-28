//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.

#pragma once

#include <pycpp/utility/elemental.h>

PYCPP_BEGIN_NAMESPACE

// OBJECTS
// -------

struct lt1: less_than_comparable<lt1>
{
    int a;
    lt1(int x): a(x) {}

    friend bool operator<(const lt1& x, const lt1& y) noexcept
    {
        return x.a < y.a;
    }
};

struct lt2: less_than_comparable<lt2, lt1>
{
    int a;
    lt2(int x): a(x) {}

    friend bool operator<(const lt2& x, const lt1& y) noexcept
    {
        return x.a < y.a;
    }

    friend bool operator>(const lt2& x, const lt1& y) noexcept
    {
        return x.a > y.a;
    }
};

struct eq1: equality_comparable<eq1>
{
    int a;
    eq1(int x): a(x) {}

    friend bool operator==(const eq1& x, const eq1& y) noexcept
    {
        return x.a == y.a;
    }
};

struct eq2: equality_comparable<eq2, eq1>
{
    int a;
    eq2(int x): a(x) {}

    friend bool operator==(const eq2& x, const eq1& y) noexcept
    {
        return x.a == y.a;
    }
};

struct mul1: multipliable<mul1>
{
    int a;
    mul1(int x): a(x) {}

    mul1& operator*=(const mul1& x) noexcept
    {
        a *= x.a;
        return *this;
    }
};

struct mul2: multipliable<mul2, mul1>
{
    int a;
    mul2(int x): a(x) {}

    mul2& operator*=(const mul1& x) noexcept
    {
        a *= x.a;
        return *this;
    }
};

struct add1: addable<add1>
{
    int a;
    add1(int x): a(x) {}

    add1& operator+=(const add1& x) noexcept
    {
        a += x.a;
        return *this;
    }
};

struct add2: addable<add2, add1>
{
    int a;
    add2(int x): a(x) {}

    add2& operator+=(const add1& x) noexcept
    {
        a += x.a;
        return *this;
    }
};

struct sub1: subtractable<sub1>
{
    int a;
    sub1(int x): a(x) {}

    sub1& operator-=(const sub1& x) noexcept
    {
        a -= x.a;
        return *this;
    }
};

struct sub2: subtractable<sub2, sub1>
{
    int a;
    sub2(int x): a(x) {}

    sub2& operator-=(const sub1& x) noexcept
    {
        a -= x.a;
        return *this;
    }
};

struct div1: dividable<div1>
{
    int a;
    div1(int x): a(x) {}

    div1& operator/=(const div1& x) noexcept
    {
        a /= x.a;
        return *this;
    }
};

struct div2: dividable<div2, div1>
{
    int a;
    div2(int x): a(x) {}

    div2& operator/=(const div1& x) noexcept
    {
        a /= x.a;
        return *this;
    }
};

struct mod1: modable<mod1>
{
    int a;
    mod1(int x): a(x) {}

    mod1& operator%=(const mod1& x) noexcept
    {
        a %= x.a;
        return *this;
    }
};

struct mod2: modable<mod2, mod1>
{
    int a;
    mod2(int x): a(x) {}

    mod2& operator%=(const mod1& x) noexcept
    {
        a %= x.a;
        return *this;
    }
};

struct xor1: xorable<xor1>
{
    int a;
    xor1(int x): a(x) {}

    xor1& operator^=(const xor1& x) noexcept
    {
        a ^= x.a;
        return *this;
    }
};

struct xor2: xorable<xor2, xor1>
{
    int a;
    xor2(int x): a(x) {}

    xor2& operator^=(const xor1& x) noexcept
    {
        a ^= x.a;
        return *this;
    }
};

struct and1: andable<and1>
{
    int a;
    and1(int x): a(x) {}

    and1& operator&=(const and1& x) noexcept
    {
        a &= x.a;
        return *this;
    }
};

struct and2: andable<and2, and1>
{
    int a;
    and2(int x): a(x) {}

    and2& operator&=(const and1& x) noexcept
    {
        a &= x.a;
        return *this;
    }
};

struct or1: orable<or1>
{
    int a;
    or1(int x): a(x) {}

    or1& operator|=(const or1& x) noexcept
    {
        a |= x.a;
        return *this;
    }
};

struct or2: orable<or2, or1>
{
    int a;
    or2(int x): a(x) {}

    or2& operator|=(const or1& x) noexcept
    {
        a |= x.a;
        return *this;
    }
};

PYCPP_END_NAMESPACE

