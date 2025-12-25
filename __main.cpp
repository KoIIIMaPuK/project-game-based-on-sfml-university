#include "__config.hpp"     // Подлючение конфиг файла

int main()
{
    /** ****************************************************
        * 
        *   @brief:         Создание SFML-окна.
        *
        ****************************
        * 
        *   @description:   Создание окна, в котором будет
        *                   отображаться весь пользовательский интерфейс
        *                   а также ограничение частоты обновления.
        *   
        *   sf::RenderWindow window()
        *   [ 1 ] @param:   config_window::WINDOW_WIDTH  - ширина окна
        *   [ 2 ] @param:   config_window::WINDOW_HEIGHT - высота окна
        *   [ 3 ] @param:   config_window::WINDOW_TITLE  - название окна приложения
        *   
        *   window.setFramerateLimit()
        *   [ 1 ] @param:   60  - количество кадров в секунду
        * 
        */
    sf::RenderWindow window(sf::VideoMode(config_window::WINDOW_WIDTH, config_window::WINDOW_HEIGHT), config_window::WINDOW_TITLE);
    window.setFramerateLimit(60);   // ограничиваем частоты обновления окна








    /** ****************************************************
        * 
        *   @brief:         Главный цикл программы.
        *
        ****************************
        * 
        *   @description:   Цикл, отвечающий за обработку всей логики
        *                   на протяжении жизни программы.
        *
        *   [ 1 ] @param:   window.isOpen() -   работает, пока окно открыто
        * 
        *   Цикл разделен на модули:
        *       - Модуль обработки эвентонов
        *       - Модуль отрисовки изображений
        */
    while (window.isOpen())
    {
        /** ****************************************************
            *
            *   @brief:         Модуль обработки эвентов.
            *
            ****************************
            *
            *   @description:   Здесь обрабатываются эвенты
            *                   возникающие во время работы программы.
            *
            */
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }




        /** ****************************************************
            *
            *   @brief:         Модуль отрисовки объектов на экране.
            *
            ****************************
            *
            *   @description:   Здесь отрисовываются все объекты на сцене.
            * 
            *   window.clear()      -   Очищает окно: закрашивает его черным цветом
            *   window.display()    -   Выводит на экран объекты, которые были добавлены в пулл
            */
        window.clear();

        window.display();
    }

	return config_window::application_exit_code::WINDOW_COMPLETE;
}
// тест

// =) тест