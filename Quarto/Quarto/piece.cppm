import <iostream>;
export module piece;

namespace quarto
{
	export class Piece
	{
	public:
		enum class Body : uint8_t
		{
			Full,
			Hollow
		};

		enum class Color : uint8_t
		{
			Dark,
			Light
		};

		enum class Height : uint8_t
		{
			Short,
			Tall
		};

		enum class Shape : uint8_t
		{
			Round,
			Square
		};

	public:
		Piece(Body body, Color color, Height height, Shape shape);

		Body GetBody() const;
		Color GetColor() const;
		Height GetHeight() const;
		Shape GetShape() const;

	private:
		Body m_body : 1;
		Color m_color : 1;
		Height m_height : 1;
		Shape m_shape : 1;
	};

	export std::ostream& operator<<(std::ostream& out, const Piece& piece);
}