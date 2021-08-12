// fm_content_island_heist.ysc @ L30654
int func_811(int iParam0, struct<3> Param1, char* sParam4, int iParam5)
{
  int iVar0;
  
  if (!OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(Param1, iParam0, &iVar0) && Global_2544210.f_4569)
  {
    iVar0 = MISC::GET_HASH_KEY(sParam4);
    OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, iParam0, Param1, true, false, false);
  }
  if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
  {
    if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0) == iParam5)
    {
      return 0;
    }
    if (NETWORK::NETWORK_IS_DOOR_NETWORKED(iVar0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iVar0))
      {
        OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, iParam5, true, false);
        return 1;
      }
    }
    else
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, iParam5, false, false);
      return 1;
    }
  }
  return 0;
}