// braithwaites1.ysc @ L26938
void func_466(int iParam0, bool bParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (bParam1)
  {
    if ((!PED::GET_PED_CONFIG_FLAG(iParam0, 138, true) || PED::_0xDC9273D95976BA22(iParam0) != 10f) || !ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(iParam0))
    {
      func_984(iParam0, 1);
      PED::_0xC2266AA617668AD3(iParam0, 10f);
      PED::_0xD05AD61F242C626B(iParam0, 10f);
      ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, false);
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, true);
    }
  }
  else if (PED::GET_PED_CONFIG_FLAG(iParam0, 138, true) || PED::_0xDC9273D95976BA22(iParam0) != 1f)
  {
    func_984(iParam0, 0);
    PED::_0xC2266AA617668AD3(iParam0, 1f);
    PED::_0xD05AD61F242C626B(iParam0, 1f);
  }
}