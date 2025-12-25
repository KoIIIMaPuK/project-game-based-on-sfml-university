#pragma once

#include "__config.hpp" // подключение конфиг файла

/** ****************************************************
    *
    *   @class:         Actor
    * 
    ****************************
    * 
    *   @brief:         Основной компонент в движке на основе которого работают объекты.
    *
    ****************************
    *
    *   @description:   Является базовым объектом в движке
    *                   который имеет все необходимые методы
    *                   для существования объекта
    *
    */
class Actor
{
/** ****************************************************
    *
    *   @brief:         Объявляем основные переменные для работы с клаассом
    *
    ****************************
    *
    *   @description:   Разделен на две части:
    *   
    *   ТЕКСТУРА:
    *   [ 1 ] @param:   sf::Texture texture         -   хранит текстуру которую использует спрайт
    *   [ 2 ] @param:   std::string texture_path    -   хранит путь к текстуре для спрайта (texture)
    *   
    *   СПРАЙТ:
    *   [ 3 ] @param:   sf::Sprite sprite           -   хранит спрайт
    *   [ 4 ] @param:   sf::Vector2f position       -   хранит позицию спрайта
    *   [ 5 ] @param:   float rotation              -   хранит угол повора спрайта
    *
    */
protected:
    // ТЕКСТУРА
    sf::Texture texture;        // хранит текстуру которую использует спрайт
    std::string texture_path;   // хранит путь к текстуре для спрайта (texture)

    // СПРАЙТ
    sf::Sprite sprite;          // хранит спрайт
    sf::Vector2f position;      // хранит позицию спрайта
    float rotation;             // хранит угол повора спрайта








/** ****************************************************
    *
    *   @brief:         Объявление сеттеров 
    *
    ****************************
    *
    *   @description:   сеттеры для работы
    *                   с полями класса.
    *
    *   @setter [ 1 ]:      setter__texture()       
    *                       инициализирует поле: sf::Texture texture
    *   @setter [ 2 ]:      setter__texture_path()       
    *                       инициализирует поле: std::string texture_path
    *   @setter [ 3 ]:      etter__position()       
    *                       инициализирует поле: sf::Vector2f position
    *   @setter [ 4 ]:      setter__rotation()       
    *                       инициализирует поле: float rotation
    */
public:
    void setter__texture(sf::Texture variable__texture);
    void setter__texture_path(std::string variable__texture_path);
    void setter__position(sf::Vector2f variable__position);
    void setter__rotation(float variable__rotation);
};

// =) тест