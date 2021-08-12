// am_heist_int.ysc @ L119824
int func_1126()
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_259))
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
      iLocal_259 = PED::CREATE_PED(4, iVar0, 713.261f, -966.2629f, 29.3953f, 62.1074f, false, false);
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_259, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_259, true);
      PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), iLocal_259);
      ENTITY::SET_ENTITY_VISIBLE(iLocal_259, false, false);
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_259))
  {
    return 0;
  }
  if (!PED::IS_PED_INJURED(iLocal_259))
  {
    if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_259))
    {
      return 0;
    }
  }
  return 1;
}