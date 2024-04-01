#ifndef _types_h_
#define _types_h_

/* Status: DONE */
namespace Type {

    /* field types, used on draw functions */
    enum Field {
        boat = '#',
        boat_disc = '%',
        hidden = '-',
        discovered = '+',
        wrong = 'x'

    };

    /* Position system */
    typedef struct Pos_s {
        unsigned int line;  // holds line
        unsigned int col;   // holds column

        /* default constructor, permit syntax like: Pos(10, 20) */
        Pos_s(unsigned int line, unsigned int col) : line(line), col(col) {/* */};
        bool operator==(Pos_s two) {
            if( this->line == two.line && this->col == two.col ) {
                return true;
            }
            return false;
        }

        bool operator!=(Pos_s two) {
            return !(*this == two);
        }
    } Pos;
}

#endif
