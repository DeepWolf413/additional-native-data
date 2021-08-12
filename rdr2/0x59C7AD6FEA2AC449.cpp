// beat_bandito_execution.ysc @ L6822
bool func_207(var uParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, int iParam7)
{
  if (!MISC::IS_BIT_SET(iLocal_619, iParam1))
  {
    if (func_384(uParam0, iParam2, vParam3))
    {
      func_385(*uParam0, iParam7);
      if (bParam6)
      {
        PERSCHAR::_0x59C7AD6FEA2AC449(func_157(iParam2), vParam3);
      }
      MISC::SET_BIT(&iLocal_619, iParam1);
    }
  }
  return MISC::IS_BIT_SET(iLocal_619, iParam1);
}