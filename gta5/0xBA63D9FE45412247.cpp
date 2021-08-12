// business_battles.ysc @ L206254
void func_2997(int iParam0, int iParam1)
{
  if (func_2999(iParam0))
  {
    if (func_1251(uLocal_2409.f_98[iParam0 /*15*/]))
    {
      if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam1, false))
      {
        PED::REMOVE_PED_DEFENSIVE_AREA(iParam1, false);
        if (func_2998(iParam0))
        {
          PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_509(iParam0, func_3718(), func_465(), 0, 0), 20f, false, false);
        }
        func_2992(iParam0, 4);
      }
    }
  }
}