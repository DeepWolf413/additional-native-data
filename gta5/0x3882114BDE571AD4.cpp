// act_cinema.ysc @ L95930
void func_706(int iParam0)
{
  ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
  ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
  VEHICLE::_0x1CF38D529D7441D9(iParam0, true);
}