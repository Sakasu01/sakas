#include <bits/stdc++.h>
using namespace std;

template <class T>
class Point{
    template<class> friend class Point;
private:
    T x_;
    T y_;
public:
    template <class U>
    Point(const Point<U>& r) : x_(r.x_), y_(r.y_){}
};
// export PATH=/bin:/usr/bin:/usr/local/bin:/sbin:/usr/sbin