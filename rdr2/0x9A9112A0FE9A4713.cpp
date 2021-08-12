// ambush_bnd_cliff1.ysc @ L13014
int func_479(var uParam0, float fParam1, int iParam2)
{
  int iVar0[3];
  int iVar4;
  int iVar5;
  bool bVar6;

  iVar4 = 0;
  while (iVar4 < uParam0->f_217)
  {
    iVar0[iVar5] = uParam0->f_49[iVar4];
    iVar5++;
    iVar4++;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
    iVar5++;
  }
  return func_544(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, iParam2);
}