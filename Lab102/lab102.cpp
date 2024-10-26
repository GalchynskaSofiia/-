#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <unordered_map>
#include <Windows.h>
// Абстрактний інтерфейс для піци
class Pizza {
public:
    virtual std::string name() const = 0;
    virtual ~Pizza() = default;
};
// Абстрактний інтерфейс для суші
class Sushi {
public:
    virtual std::string name() const = 0;
    virtual ~Sushi() = default;
};
// Абстрактний інтерфейс для салату
class Salad {
public:
    virtual std::string name() const = 0;
    virtual ~Salad() = default;
};

// Конкретна піца
class MargheritaPizza : public Pizza {
public:
    std::string name() const override { return "Піца Маргарита"; }
};
// Конкретні суші
class PhiladelphiaSushi : public Sushi {
public:
    std::string name() const override { return "Роли Філадельфія"; }
};
// Конкретний салат
class CaesarSalad : public Salad {
public:
    std::string name() const override { return "Салат Цезар"; }
};

// Абстрактна фабрика для створення страв
class AbstractDish {
public:
    virtual std::unique_ptr<Pizza> createPizza() const = 0;
    virtual std::unique_ptr<Sushi> createSushi() const = 0;
    virtual std::unique_ptr<Salad> createSalad() const = 0;
    virtual ~AbstractDish() = default;
};

// Фабрика для створення італійських страв
class ItalianDish : public AbstractDish {
public:
    std::unique_ptr<Pizza> createPizza() const override {
        return std::make_unique<MargheritaPizza>();
    }
    std::unique_ptr<Sushi> createSushi() const override {
        return nullptr; //В італійській кухні немає суші
    }
    std::unique_ptr<Salad> createSalad() const override {
        return std::make_unique<CaesarSalad>();
    }
};
// Фабрика для створення японських страв
class JapaneseDish : public AbstractDish {
public:
    std::unique_ptr<Pizza> createPizza() const override {
        return nullptr; //В японській кухні немає піци
    }
    std::unique_ptr<Sushi> createSushi() const override {
        return std::make_unique<PhiladelphiaSushi>();
    }
    std::unique_ptr<Salad> createSalad() const override {
        return std::make_unique<CaesarSalad>();
    }
};

// Декоратори інгредієнтів для піци
class PizzaDecorator : public Pizza {
protected:
    std::unique_ptr<Pizza> pizza;
public:
    PizzaDecorator(std::unique_ptr<Pizza> p) : pizza(std::move(p)) {}
    virtual std::string name() const override {
        return pizza->name();
    }
};

class ExtraCheese : public PizzaDecorator {
public:
    ExtraCheese(std::unique_ptr<Pizza> p) : PizzaDecorator(std::move(p)) {}
    std::string name() const override {
        return pizza->name() + " з додатковим сиром";
    }
};

class SpicySauce : public PizzaDecorator {
public:
    SpicySauce(std::unique_ptr<Pizza> p) : PizzaDecorator(std::move(p)) {}
    std::string name() const override {
        return pizza->name() + " з гострим соусом";
    }
};

// Декоратор інгредієнтів для суші
class SushiDecorator : public Sushi {
protected:
    std::unique_ptr<Sushi> sushi;
public:
    SushiDecorator(std::unique_ptr<Sushi> s) : sushi(std::move(s)) {}
    virtual std::string name() const override {
        return sushi->name();
    }
};

class SoySauce : public SushiDecorator {
public:
    SoySauce(std::unique_ptr<Sushi> s) : SushiDecorator(std::move(s)) {}
    std::string name() const override {
        return sushi->name() + " з соєвим соусом";
    }
};
// Інтерфейс стратегії доставки
class DeliveryStrategy {
public:
    virtual void deliver() const = 0;
    virtual ~DeliveryStrategy() = default;
};
//Кур'єрська доставка
class CourierDelivery : public DeliveryStrategy {
public:
    void deliver() const override {
        std::cout << "Адреса доставки:\n";
        std::string adress;
        std::cin >> adress;
        std::cout << "Доставка замовлення здійснюється кур'єром до вашого місцезнаходження.\n";
    }
};
//Самовивіз
class PickupDelivery : public DeliveryStrategy {
public:
    void deliver() const override {
        std::cout << "Ваше замовлення готове до самовивозу з ресторану.\n";
    }
};

// Клас для складного замовлення
class Order {
private:
    std::vector<std::string> items;
    std::unique_ptr<DeliveryStrategy> deliveryStrategy;
public:
    Order() : deliveryStrategy(nullptr) {}
    void addItem(const std::string& itemName) {
        items.push_back(itemName);
    }
    void showOrder() const {
        std::cout << "Ваше замовлення містить:\n";
        for (const auto& item : items) {
            std::cout << "- " << item << "\n";
        }
    }
    void setDeliveryStrategy(std::unique_ptr<DeliveryStrategy> strategy) {
        deliveryStrategy = std::move(strategy);
    }
    void executeDelivery() const {
        if (deliveryStrategy) {
            deliveryStrategy->deliver();
        }
        else {
            std::cout << "Спосіб доставки не вибрано.\n";
        }
    }
    const std::vector<std::string>& getItems() const {
        return items;
    }
};

// Інтерфейс будівельника
class OrderBuilder {
public:
    virtual ~OrderBuilder() = default;
    virtual void addPizza() = 0;
    virtual void addSushi() = 0;
    virtual void addSalad() = 0;
    virtual void addExtraCheese() = 0;
    virtual void addSpicySauce() = 0;
    virtual void addSoySauce() = 0;
    virtual std::unique_ptr<Order> getOrder() = 0;
};
// Конкретний будівельник для замовлення
class ConcreteOrderBuilder : public OrderBuilder {
private:
    std::unique_ptr<Order> order;
public:
    ConcreteOrderBuilder() {
        reset();
    }
    void reset() {
        order = std::make_unique<Order>();
    }
    void addPizza() override {
        order->addItem("Піца Маргарита");
    }
    void addSushi() override {
        order->addItem("Роли Філадельфія");
    }
    void addSalad() override {
        order->addItem("Салат Цезар");
    }
    void addExtraCheese() override {
        order->addItem("Додатковий сир");
    }
    void addSpicySauce() override {
        order->addItem("Гострий соус");
    }
    void addSoySauce() override {
        order->addItem("Соєвий соус");
    }
    std::unique_ptr<Order> getOrder() override {
        return std::move(order);
    }
};
// Директор для керування будівельником
class OrderDirector {
private:
    OrderBuilder* builder;
public:
    void setBuilder(OrderBuilder* b) {
        builder = b;
    }
};
class OrderSystem {
private:
    ConcreteOrderBuilder builder;
    OrderDirector director;
    std::unordered_map<std::string, double> prices;

public:
    OrderSystem(): builder(), director() {
        // Ініціалізуємо ціни на страви та інгредієнти
        prices["Піца Маргарита"] = 289;
        prices["Салат Цезар"] = 239;
        prices["Роли Філадельфія"] = 399;
        prices["Додатковий сир"] = 20;
        prices["Гострий соус"] = 13;
        prices["Соєвий соус"] = 13;
    }
    void displayMenu() {
        std::cout << "Меню:\n";
        std::cout << "1. Піца Маргарита - 289 грн (Додатковий сир - 20 грн, гострий соус - 13 грн)\n";
        std::cout << "2. Роли Філадельфія - 399 грн (Додатковий соєвий соус - 13 грн)\n";
        std::cout << "3. Салат Цезар - 239 грн\n";
    }
    void offerAdditionalIngredients(const std::string& dish) {
        if (dish == "1") {
            std::cout << "Бажаєте додати додатковий сир до піци? (так/ні): ";
            std::string response1;
            std::cin >> response1;
            if (response1 == "так") {
                builder.addExtraCheese();
            }
            std::cout << "Бажаєте додати гострий соус до піци? (так/ні): ";
            std::string response2;
            std::cin >> response2;
            if (response2 == "так") {
                builder.addSpicySauce();
            }
        }
        else if (dish == "2") {
            std::cout << "Бажаєте додати соєвий соус до суші? (так/ні): ";
            std::string response3;
            std::cin >> response3;
            if (response3 == "так") {
                builder.addSoySauce();
            }
        }
    }
    void setDeliveryMethod(Order& order) {
        std::cout << "Оберіть спосіб доставки:\n1. Кур'єр\n2. Самовивіз\n";
        int choice;
        std::cin >> choice;
        if (choice == 1) {
            order.setDeliveryStrategy(std::make_unique<CourierDelivery>());
        }
        else {
            order.setDeliveryStrategy(std::make_unique<PickupDelivery>());
        }
    }
    double calculateTotalPrice(const Order& order) const {
        double total = 0;
        const auto& items = order.getItems();
        for (const auto& item : items) {
            auto it = prices.find(item);
            if (it != prices.end()) {
                total += it->second;
            }
        }
        return total;
    }
};

// Головна функція
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    OrderSystem system;
    ConcreteOrderBuilder builder;
    OrderDirector director;

    director.setBuilder(&builder);

    system.displayMenu();
    std::string itemName;
    std::cout << "Оберіть страви (введіть 'кінець' для завершення): ";
    while (std::cin >> itemName && itemName != "кінець") {
        if (itemName == "1") {
            builder.addPizza();
            system.offerAdditionalIngredients(itemName);
        }
        else if (itemName == "2") {
            builder.addSushi();
            system.offerAdditionalIngredients(itemName);
        }
        else if (itemName == "3") {
            builder.addSalad();
        }
        else {
            std::cout << "Невідома страва. Спробуйте ще раз.\n";
        }
    }
    auto order = builder.getOrder();
    system.setDeliveryMethod(*order);
    order->showOrder();
    order->executeDelivery();
    double total = system.calculateTotalPrice(*order);
    std::cout << "Загальна вартість: " << total << " грн\n";
    return 0;
}