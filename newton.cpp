int main() {
    const int SIZE = 40; // FIXME : NEEDS TO CHANGE OTHER PART OF PROGRAM
    char array[SIZE];
    char column_X;
    char column_rx_num = '0';
    char column_O;
    char column_ro_num = '0';
    int movecount = 0;
    
    for(int i = 0; i <= SIZE; i++){ array[i] = '.'; }

    student_game_info();
    
    do{
        moveXInput(column_X, movecount, array, column_rx_num, SIZE);
        cout << endl;
        checkWinner(array, SIZE);
        moveOInput(column_O, movecount, array, column_ro_num, SIZE);
        checkWinner(array, SIZE);
    }while(true);
    
    return 0;
}
