// abigail2_1.ysc @ L34807
void func_786(var uParam0, bool bParam1)
{
  WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);
  if (!bParam1)
  {
    if (!Global_17)
    {
      PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("HOLSTERS_LEFT"), 0);
      Global_17 = !bParam1;
    }
  }
}