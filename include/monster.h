#ifndef MONSTER_H_GUARD
#define MONSTER_H_GUARD

#define ZEROUT 0x00000000
#define MIDDLE 0x80000000
#define MAXEDOUT 0xFFFFFFFF

// TODO: A good class
class Monster {
public:
  Monster();
  Monster(Monster &&) = default;
  Monster(const Monster &) = default;
  Monster &operator=(Monster &&) = default;
  Monster &operator=(const Monster &) = default;
  ~Monster();

  void step(void);

private:
  unsigned int healthy;
  unsigned int hungry;
  unsigned int thirsty;
  unsigned int dirty;
  unsigned int age;
  unsigned int happy;
};

#endif // !MONSTER_H_GUARD
