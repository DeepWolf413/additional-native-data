// player_camp.ysc @ L6525
void func_180(var uParam0, var uParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
  {
    return;
  }
  uParam0->f_18 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_80, uParam0->f_4, true, true, false, true);
  ENTITY::_0x1AD922AB5038DEF3(uParam0->f_18);
  ENTITY::_0x36EB4D34D4A092C5(uParam0->f_18, 1);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_80);
}