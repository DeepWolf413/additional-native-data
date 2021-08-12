// grays1.ysc @ L60068
void func_1388(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  int iVar1;

  VEHICLE::_0x226C6A4E3346D288(iParam0, 1);
  iVar0 = 0;
  while (iVar0 < 6)
  {
    iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      VEHICLE::_0x4402960666000E62(iParam0, iVar0);
      ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar1, true);
      if (bParam1)
      {
        TASK::_TASK_FLEE_FROM_PED(iVar1, Global_35, 1797.761f, -659.7845f, 41.6412f, 100f, -1, 1024, 3f, 0);
      }
      if (bParam2)
      {
        func_190(&iVar1, 1, 0, 1);
      }
    }
    iVar0++;
  }
}