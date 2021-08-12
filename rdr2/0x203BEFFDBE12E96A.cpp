// act_fishing01.ysc @ L10757
bool func_242(var uParam0)
{
  char cVar0[32];

  StringCopy(&cVar0, func_604(0), 32);
  if (func_607(cVar0, &(Local_195.f_96)))
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1182.496f, -580.8946f, 67.0303f, 246.3689f, true, true, true);
    func_608(-20.9653f, -10.7725f);
    CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
    return true;
  }
  return false;
}