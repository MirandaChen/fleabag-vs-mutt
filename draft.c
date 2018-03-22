// Yinglan Chen, March 2018

// most basic version: given an array of strength
// next step: interact through terminal I/O input
// future plan: graphic interpretation

struct Player
{
  int x;
  int y;
  int angle;
  int blood;
} player;

void eval(cat,dot)

bool hasEnded(cat, dog)

int main(int argc, char const *argv[])
{
  // hardcode for easy start
  catinput = [];
  doginput = [];

  // init
  player* cat = malloc(sizeof(Player));
  if (cat == NULL) exit(-1);  // null check
  cat->x = 10;
  cat->y = 0;
  cat->angle = 45;
  cat->blood = 100;
  player* dog = malloc(sizeof(Player));
  if (dog == NULL) {free(cat);exit(-1);} // null check
  dog->x = 90;
  dog->y = 0;
  dog->angle = 45;
  dog->blood = 100;
  // start game
  while (!hasEnded(cat,dog)){
    //randomize a wind speed with direction
    eval(v)
    update cat and dog
    compare blood
  }
  // game end
  // print output
  printf("?wins\n", );
  return 0;
}

/*
instance: cat, dog
attribution:
- position (x,y): default, fixed
- shoot angle: default = 45
- how much blood value left

things to consider:
- wind speed
- initial speed

algorithm:
平抛运动
know vx, vy
know time by vy,
know falling point then

logistics:
- first determine wind speed
# second step
animation
speical 道具： double attack, huge attack, stink bomb
set different difficult levels 
*/