// feud1.ysc @ L62667
void func_1359(bool bParam0, int iParam1, bool bParam2)
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
        ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iVar1, bParam2);
        ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, bParam2);
      }
      iVar0++;
    }
  }
}