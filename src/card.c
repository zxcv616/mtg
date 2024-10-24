typedef enum { CREATURE, SPELL } CardType;

typedef struct {
    char name[50];
    CardType type;
    int manaCost;
    int attack;
    int defense;
} Card;