// feud1.ysc @ L82712
void func_1886(bool bParam0, int iParam1, float fParam2)
{
  int iVar0;
  int iVar1;

  if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
  {
    iVar0 = 0;
    while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
    {
      iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(bParam0, iVar0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
      {
        VEHICLE::_0xD0116DF21E6C7B36(iVar1, fParam2);
      }
      iVar0++;
    }
  }
}