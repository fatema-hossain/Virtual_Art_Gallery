#ifndef PRICING_STRATEGY_H
#define PRICING_STRATEGY_H

class PricingStrategy {
public:
    virtual void setPrice(double price) = 0;
    virtual double getPrice() const = 0;
    virtual ~PricingStrategy() {}
};

class FixedPrice : public PricingStrategy {
private:
    double price;

public:
    void setPrice(double price) override;
    double getPrice() const override;
};

class Auction : public PricingStrategy {
private:
    double startingBid;

public:
    void setPrice(double startingBid) override;
    double getPrice() const override;
};

#endif // PRICING_STRATEGY_H