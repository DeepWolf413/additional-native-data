// feud1.ysc @ L62546
void func_1355(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, float fParam6)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(bParam1) && !ENTITY::IS_ENTITY_DEAD(bParam1))
    {
      iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(bParam1, iParam2);
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, vParam3), (ENTITY::GET_ENTITY_HEADING(iVar0) + fParam6), true, false, true);
      if (ENTITY::IS_ENTITY_A_PED(bParam0))
      {
        PED::_0xE4C95E0AE31C6512(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), iVar0);
      }
    }
  }
}