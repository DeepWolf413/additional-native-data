// ambush_bnd_ridge_ambush.ysc @ L9578
void func_350(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
  if (!PED::DOES_GROUP_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
  {
    return;
  }
  PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
  if (bParam2)
  {
    PED::SET_PED_AS_GROUP_LEADER(*uParam0, *uParam1, false);
  }
  else
  {
    PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *uParam1);
    PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
    PED::_0xBAD2A311667A50D7(*uParam0, iParam5);
  }
  PED::_0x97C475212B327666(*uParam1, iParam6);
}