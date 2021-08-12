// carsteal4.ysc @ L3844
int func_53(struct<3> Param0, float fParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2046[2]))
  {
    if (func_55(&(iLocal_2046[2]), 2, Param0, fParam3, 1, 0, 0))
    {
      PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_2046[2], true);
      func_54(&Local_2124, 2, iLocal_2046[2], "TREVOR", 0, 1);
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_2046[2], false);
      PED::SET_PED_MAX_HEALTH(iLocal_2046[2], 200);
      ENTITY::SET_ENTITY_HEALTH(iLocal_2046[2], 200, 0);
      PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_2046[2], false);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2046[2], 1862763509);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}