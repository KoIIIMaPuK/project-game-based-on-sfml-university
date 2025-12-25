#pragma once

#include "__config.hpp" // Подключение конфиг файла

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
    *   @brief:         Объявление основных переменных для работы с клаассом
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
    *   @setter [ 3 ]:      setter__position()       
    *                       инициализирует поле: sf::Vector2f position
    *   @setter [ 4 ]:      setter__rotation()       
    *                       инициализирует поле: float rotation
    */
public:
    void setter__texture(sf::Texture variable__texture);
    void setter__texture_path(std::string variable__texture_path);
    void setter__position(sf::Vector2f variable__position);
    void setter__rotation(float variable__rotation);








/** ****************************************************
    *
    *   @brief:         Объявление геттеров
    *
    ****************************
    *
    *   @description:   геттеры для работы
    *                   с полями класса.
    *
    *   @getter [ 1 ]:      getter__texture()
    *                       возвращает значение поля: sf::Texture texture
    *   @getter [ 2 ]:      getter__texture_path()
    *                       возвращает значение поля: std::string texture_path
    *   @getter [ 3 ]:      getter__position()
    *                       возвращает значение поля: sf::Vector2f position
    *   @getter [ 4 ]:      getter__rotation()
    *                       возвращает значение поля: float rotation
    */
public:
    sf::Texture getter__texture();
    std::string getter__texture_path();
    sf::Vector2f getter__position();
    float getter__rotation();
};