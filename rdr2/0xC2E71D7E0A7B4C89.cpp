// beat_train_holdup.ysc @ L1798
bool func_46(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    iVar0 = 0;
    while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
    {
      iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
      {
        if (ENTITY::_0xC2E71D7E0A7B4C89(iVar2))
        {
          iVar1 = 1;
        }
        else
        {
          return false;
        }
      }
      iVar0++;
    }
  }
  return iVar1;
}