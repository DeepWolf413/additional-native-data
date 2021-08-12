// agency_heist1.ysc @ L91818
void func_407(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = func_408(iParam2);
  if (iVar0 != 0)
  {
    if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iVar0))
    {
      WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iParam1, iVar0);
    }
  }
}