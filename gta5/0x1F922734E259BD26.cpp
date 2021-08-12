// freemode.ysc @ L579103
void func_8530(int iParam0, int iParam1)
{
  int iVar0;
  
  if (Global_2544210.f_6662 != iParam1)
  {
    if (!func_8532(iParam0))
    {
      OBJECT::_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(iParam1, false);
      OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(iParam1, -1);
    }
    iVar0 = ENTITY::_GET_ENTITY_PICKUP(PLAYER::PLAYER_PED_ID(), iParam1);
    if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_AN_OBJECT(iVar0)) && OBJECT::IS_OBJECT_A_PICKUP(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0)))
    {
      if (func_8531(iVar0))
      {
        if (func_8532(iParam0))
        {
          func_799("SMRD_HT_DROP", -1);
          OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), true, true);
        }
        OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0));
      }
    }
  }
}