// industry3.ysc @ L40008
int func_879(var uParam0)
{
  var uVar0;
  vector3 vVar1;

  if (!CAM::_0xAA235E2F2C09E952("script@Story@IND3@pullout"))
  {
    if (!CAM::_0x595550376B7EA230("script@Story@IND3@pullout"))
    {
      CAM::_0x1B3C2D961F5FC0E1("script@Story@IND3@pullout");
    }
    return 0;
  }
  PED::SET_PED_CONFIG_FLAG(Global_35, 411, true);
  vVar1 = { 3276.802f, -1347.156f, 40.2f };
  if (WATER::GET_WATER_HEIGHT(vVar1, &uVar0))
  {
    vVar1.f_2 = uVar0;
  }
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Global_35, vVar1, 106.3852f, false, true);
  PED::_0x2208438012482A1A(Global_35, false, false);
  func_998(0, 0);
  func_893(Local_1571[0 /*10*/], 3263.887f, -1346.646f, 40.0813f, 46.4006f, 128, 1073741824 /* Float: 2f */);
  func_893(Local_1571[1 /*10*/], 3271.096f, -1350.611f, 40.0815f, 64.2795f, 128, 1073741824 /* Float: 2f */);
  func_893(Local_1571[2 /*10*/], 3265.086f, -1353.55f, 40.0829f, 88.6942f, 128, 1073741824 /* Float: 2f */);
  WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_SCHOFIELD"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
  WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REPEATER_WINCHESTER"), 50, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
  iLocal_1815 = VOLUME::_CREATE_VOLUME_CYLINDER(3276.956f, -1350.991f, 41.15511f, 0f, 0f, 0f, 9.063385f, 9.599677f, 3.916222f);
  return 1;
}