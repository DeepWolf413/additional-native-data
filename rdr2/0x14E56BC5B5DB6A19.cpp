// winter1.ysc @ L56357
void func_1397()
{
  if (func_374(joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0))
  {
    iLocal_913 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
  }
  else
  {
    iLocal_913 = 49;
  }
  if (iLocal_913 < 10)
  {
    iLocal_913 = 10;
  }
  WEAPON::SET_PED_AMMO(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 49);
  func_179(&iLocal_905, 2048);
}