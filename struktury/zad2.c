// 2. Napisać funkcję disjointrect sprawdzającą,
//  czy prostokąty są rozłączne:
// /* disjointrect: zwróć 1 jeśli r1 jest rozłączny z r2,
//    0 — w przeciwnym przypadku */
// int disjointrect(struct rect r1, struct rect r2);


#include <stdio.h>

struct point
{
  int x;
  int y;
};

struct rect{
  struct point low_left;
  struct point upp_right;
};

struct point make_point(int x, int y)
{
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

int disjointrect(struct rect r1, struct rect r2);

int main()
{
  struct rect r1 = {
      .low_left = make_point(2, 4),
      .upp_right = make_point(6, 9)};

  struct rect r2 = {
      .low_left = make_point(1, 3),
      .upp_right = make_point(7, 10)};

  printf("%d\n", disjointrect(r1, r2));
}

int disjointrect(struct rect r1, struct rect r2)
{
  return r1.upp_right.x <= r2.low_left.x || r1.upp_right.y <= r2.low_left.y 
    || r1.low_left.x >= r2.upp_right.x || r1.low_left.y >= r2.upp_right.y;
}