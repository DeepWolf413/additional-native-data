// beat_disabled_beggar.ysc @ L1339
bool func_35()
{
  int iVar0;

  iVar0 = 0;
  if (iLocal_326 == 1 && Global_1935630.f_24 == 1)
  {
    if (PED::_0x09D7AFD3716DA8E1(uLocal_433[0], 250))
    {
      iVar0 = 1;
    }
    if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED"), Local_132.f_51, 20f))
    {
      iVar0 = 1;
    }
    if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), Local_132.f_51, 20f))
    {
      iVar0 = 1;
    }
    if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), Local_132.f_51, 20f))
    {
      iVar0 = 1;
    }
    if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_PED_SCREAMED"), Local_132.f_51, 15f))
    {
      iVar0 = 1;
    }
  }
  return iVar0;
}