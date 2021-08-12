// am_casino_limo.ysc @ L15730
void func_296()
{
  struct<3> Var0;
  float fVar3;
  
  if (!func_301())
  {
    return;
  }
  if ((!func_300(NETWORK::PARTICIPANT_ID(), 3) && !func_16(7)) && func_298(func_8()))
  {
    Var0 = { func_280() };
    fVar3 = 0f;
    if (func_141(Var0, &Var0, &fVar3))
    {
      ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
      ENTITY::SET_ENTITY_VISIBLE(func_7(), true, false);
      ENTITY::SET_ENTITY_COLLISION(func_7(), true, false);
      ENTITY::SET_ENTITY_INVINCIBLE(func_7(), false);
      ENTITY::SET_ENTITY_COORDS(func_7(), Var0, true, false, false, true);
      ENTITY::SET_ENTITY_HEADING(func_7(), fVar3);
      func_137(Var0, fVar3, func_283(), func_7());
      func_297(3);
    }
  }
}