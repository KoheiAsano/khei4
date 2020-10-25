template <typename T, T MOD = 1000000007>
struct Mint {
    static const T mod = MOD;
    T v;
    Mint() : v(0)
    {
    }
    Mint(signed v) : v(v)
    {
    }
    Mint(long long t)
    {
        v = t % MOD;
        if (v < 0)
            v += MOD;
    }
    Mint pow(long long k)
    {
        Mint res(1), tmp(v);
        while (k) {
            if (k & 1)
                res *= tmp;
            tmp *= tmp;
            k >>= 1;
        }
        return res;
    }

    Mint inv()
    {
        return pow(MOD - 2);
    };

    Mint& operator+=(Mint a)
    {
        v += a.v;
        if (v >= MOD)
            v -= MOD;
        return *this;
    }
    Mint& operator-=(Mint a)
    {
        v -= a.v;
        if (v < 0)
            v += MOD;
        return *this;
    }
    Mint& operator*=(Mint a)
    {
        v = v * a.v % MOD;
        return *this;
    }
    Mint& operator/=(Mint a)
    {
        return (*this) *= a.inv();
    }

    Mint operator+(Mint a) const
    {
        return Mint(v) += a;
    }
    Mint operator-(Mint a) const
    {
        return Mint(v) -= a;
    }
    Mint operator*(Mint a) const
    {
        return Mint(v) *= a;
    }
    Mint operator/(Mint a) const
    {
        return Mint(v) /= a;
    }

    Mint operator-() const
    {
        return v ? Mint(MOD - v) : Mint(v);
    }

    bool operator==(const Mint a) const
    {
        return v == a.v;
    }
    bool operator!=(const Mint a) const
    {
        return v != a.v;
    }
    bool operator<(const Mint a) const
    {
        return v < a.v;
    }
    // this doesn't work
    ostream& operator<<(ostream& os)
    {
        os << this->v;
        return os;
    }
};