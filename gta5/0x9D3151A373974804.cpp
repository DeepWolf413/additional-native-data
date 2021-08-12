// agency_heist3b.ysc @ L107300
void func_675(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8, float fParam9, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
  if (!PED::IS_PED_INJURED(*uParam0))
  {
    PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam5);
    PED::SET_PED_COMBAT_RANGE(*uParam0, iParam6);
    PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, iParam7);
    PED::SET_COMBAT_FLOAT(*uParam0, 5, fParam9);
    PED::SET_COMBAT_FLOAT(*uParam0, 8, fParam10);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 51, bParam11);
    if (bParam12)
    {
      PED::SET_PED_CONFIG_FLAG(*uParam0, 188, bParam12);
    }
    PED::SET_PED_DIES_WHEN_INJURED(*uParam0, bParam12);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, bParam13);
    PED::SET_PED_CONFIG_FLAG(*uParam0, 286, bParam14);
    if (!func_41(Param1) && fParam4 != 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param1, fParam4, true, false);
    }
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
  }
}