// act_bankrobbery01.ysc @ L53572
void func_1679(int iParam0, bool bParam1, bool bParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (bParam1)
    {
      AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
    }
    if (bParam2)
    {
      PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
    }
    if (Global_35 == iParam0)
    {
    }
    ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
  }
}