// spd_swampweirdo1.ysc @ L6316
void func_193(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_164[0]))
  {
    return;
  }
  if (!func_362(uParam0->f_164[0], 1))
  {
    return;
  }
  PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_164[0], 1.75f);
}