#include "_Actor.hpp"









/** ****************************************************
    *
    *   @setter:        texture
    *
    ****************************
    *
    *   @brief:         инициализирует поле: sf::Texture texture
    *
    */
void Actor::setter__texture(sf::Texture variable__texture)
{
	this->texture = variable__texture;
}









/** ****************************************************
    *
    *   @setter:        texture_path
    *
    ****************************
    *
    *   @brief:         инициализирует поле: std::string texture_path
    *
    */
void Actor::setter__texture_path(std::string variable__texture_path)
{
	this->texture_path = variable__texture_path;
}








/** ****************************************************
    *
    *   @setter:        position
    *
    ****************************
    *
    *   @brief:         инициализирует поле: sf::Vector2f position
    *
    */
void Actor::setter__position(sf::Vector2f variable__position)
{
	this->position = variable__position;
}








/** ****************************************************
    *
    *   @setter:        rotation
    *
    ****************************
    *
    *   @brief:         инициализирует поле: float rotation
    *
    */
void Actor::setter__rotation(float variable__rotation)
{
	this->rotation = variable__rotation;
}









/** ****************************************************
    *
    *   @setter:        texture
    *
    ****************************
    *
    *   @brief:         инициализирует поле: sf::Texture texture
    *
    */
sf::Texture Actor::getter__texture()
{
    return this->texture;
}









/** ****************************************************
    *
    *   @setter:        texture_path
    *
    ****************************
    *
    *   @brief:         инициализирует поле: std::string texture_path
    *
    */
std::string Actor::getter__texture_path()
{
    return this->texture_path;
}








/** ****************************************************
    *
    *   @setter:        position
    *
    ****************************
    *
    *   @brief:         инициализирует поле: sf::Vector2f position
    *
    */
sf::Vector2f Actor::getter__position()
{
    return this->position;
}








/** ****************************************************
    *
    *   @setter:        rotation
    *
    ****************************
    *
    *   @brief:         инициализирует поле: float rotation
    *
    */
float Actor::getter__rotation()
{
    return this->rotation;
}