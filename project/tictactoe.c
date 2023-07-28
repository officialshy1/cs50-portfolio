def print_board(board):
    for row in board:
        print(" | ".join(row))
        print("-" * 9)

def check_winner(board, player):
    for row in board:
        if all(cell == player for cell in row):
            return True

    for col in range(3):
        if all(board[row][col] == player for row in range(3)):
            return True

    if all(board[i][i] == player for i in range(3)):
        return True

    if all(board[i][2 - i] == player for i in range(3)):
        return True

    return False

def is_board_full(board):
    return all(all(cell != ' ' for cell in row) for row in board)

def tic_tac_toe():
    board = [[' ' for _ in range(3)] for _ in range(3)]
    players = ['X', 'O']
    current_player = 0

    while True:
        print_board(board)

        player = players[current_player]
        print(f"Player {player}, it's your turn.")

        while True:
            row = int(input("Enter the row (0, 1, or 2): "))
            col = int(input("Enter the column (0, 1, or 2): "))

            if 0 <= row < 3 and 0 <= col < 3 and board[row][col] == ' ':
                break
            else:
                print("Invalid move. Try again.")

        board[row][col] = player

        if check_winner(board, player):
            print_board(board)
            print(f"Congratulations! Player {player} wins!")
            break

        if is_board_full(board):
            print_board(board)
            print("It's a draw!")
            break

        current_player = 1 - current_player  # Switch players

if __name__ == "__main__":
    tic_tac_toe()
