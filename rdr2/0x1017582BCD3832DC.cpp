// act_bankrobbery01.ysc @ L57265
bool func_1841(var uParam0, int iParam1, var uParam2)
{
  var uVar0;

  if (uParam2->f_12 < IntToFloat(func_1972(uParam2)))
  {
    if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
    {
      if (func_1834(uParam2, iParam1))
      {
        if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
        {
          func_1969(uParam2, 1);
          return true;
        }
      }
    }
  }
  return false;
}