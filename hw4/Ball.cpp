#include "Ball.hpp"
#include <cmath>

Ball::Ball(Point center, Velocity velocity, double radius, Color color, bool collidable) {
    _center = center;
    _velocity = velocity;
    _radius = radius;
    _color = color;
    _collidable = collidable;
}

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    _velocity = velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return _velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw(_center, _radius, _color);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    _center = center;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return _center;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return _radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
/**
 * @note ВОПРОС: корректно ли тут возвращать сразу выражением, чтобы поле массы не заводить или так не очень хорошо?    
*/
    return (3.14 * std::pow(_radius, 3) * 4. / 3.);
}

bool Ball::getCollidable() const {
    return _collidable;    
}