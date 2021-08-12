// business_battles.ysc @ L206458
int func_3007(int iParam0, bool bParam1)
{
  if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::_0x06087579E7AA85A9(iParam0, PLAYER::PLAYER_PED_ID(), func_3008(bParam1), -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 287))
    {
      return 1;
    }
  }
  return 0;
}