// beat_booby_trap.ysc @ L23894
void func_786(var uParam0)
{
  if (uParam0->f_7 != 0)
  {
    TASK::REMOVE_COVER_POINT(uParam0->f_7);
    uParam0->f_7 = 0;
  }
  uParam0->f_7 = TASK::ADD_COVER_POINT(uParam0->f_28, uParam0->f_28.f_3, 3, 1, 1, false);
}