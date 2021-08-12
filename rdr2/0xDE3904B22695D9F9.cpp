// beat_drown_murder.ysc @ L3718
void func_110()
{
  bool bVar0;

  if (!func_33(iLocal_400, 32))
  {
    bVar0 = true;
    if (func_51(uLocal_410[1], 0, 1))
    {
      if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[1], "Default_Angry"))
      {
        PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[1], "Default_Angry");
        bVar0 = false;
      }
    }
    if (func_51(uLocal_410[0], 0, 1))
    {
      if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[0], "Default_Angry"))
      {
        PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[0], "Default_Angry");
        bVar0 = false;
      }
    }
    if (bVar0)
    {
      func_30(&iLocal_400, 32);
    }
  }
}