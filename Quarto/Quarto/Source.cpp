import piece;
import <iostream>;
void main(){
	using namespace quarto;
	using enum Piece::Color;
	Piece piece{Piece::Body::Full, Dark, Piece::Height::Tall, Piece::Shape::Round};
	std::cout << piece;
}