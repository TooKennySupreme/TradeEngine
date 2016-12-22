#ifndef Order_h
#define Order_h

#include "../Common.h"

namespace Engine {

class Order {
public:
    typedef unsigned long long qty_t;
    typedef unsigned long long price_t;
    enum class OrderType {
        BUY = 0,
        SELL = 1
    };

    Order(price_t price, qty_t qty, OrderType type)
        : price_(price)
        , qty_(qty)
        , type_(type) { }

    inline price_t price() const { return price_; }
    inline qty_t qty() const { return qty_; }
    inline OrderType type() const { return type_; }

private:
    price_t price_;
    qty_t qty_;
    OrderType type_;

};

} /* Engine */

#endif /* Order_h */
