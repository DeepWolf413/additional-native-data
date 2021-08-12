// feud1.ysc @ L82932
void func_1899(bool bParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
  {
    iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(bParam0, iParam1);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
    {
      VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar0, iParam2, iParam4, fParam3);
    }
  }
}