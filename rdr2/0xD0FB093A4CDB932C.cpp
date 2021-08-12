// beat_train_holdup.ysc @ L1234
void func_35(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    iVar0 = 0;
    while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
    {
      iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
      {
        ENTITY::_0x6C31B06E91518269(iVar1, iParam2);
      }
      iVar0++;
    }
  }
}