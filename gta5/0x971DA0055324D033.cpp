// am_casino_peds.ysc @ L290410
void func_3880(int* iParam0, struct<3> Param1, struct<3> Param4)
{
  int iVar0;
  
  iVar0 = func_3893();
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    OBJECT::DELETE_OBJECT(iParam0);
  }
  *iParam0 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Param1, false, true, false);
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, Param1, false, false, true);
    ENTITY::SET_ENTITY_ROTATION(*iParam0, Param4, 2, true);
    ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
    ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
    ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
    OBJECT::_SET_OBJECT_TEXTURE_VARIATION(*iParam0, func_3881(func_3892(PLAYER::PLAYER_ID())));
  }
}