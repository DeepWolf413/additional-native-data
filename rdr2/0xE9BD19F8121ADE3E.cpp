// abigail2_1.ysc @ L85877
void func_2591(int iParam0)
{
  if (!WEAPON::IS_WEAPON_VALID(iParam0))
  {
    return;
  }
  if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
  {
    return;
  }
  if (Global_43891)
  {
    return;
  }
  WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}