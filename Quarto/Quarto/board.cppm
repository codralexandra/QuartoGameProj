module;

export module board;
import <array>;
import <optional>;
export import piece;

namespace quarto {
	export class Board {
	private:
		std::array<std::optional<Piece>, 16> m_pieces;
	};
}