// trainrobbery_ambient.ysc @ L8428
bool func_290(int iParam0, int iParam1)
{
  int iVar0;

  if (iParam1 >= 0)
  {
    return true;
  }
  iVar0 = 0;
  while (iVar0 < iParam0->f_1098)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
    {
      if (!func_11(iParam0->f_1[iVar0 /*22*/].f_4, -2147483648))
      {
        VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0->f_1[iVar0 /*22*/]);
        func_34(&(iParam0->f_1[iVar0 /*22*/].f_4), -2147483648);
      }
      if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0->f_1[iVar0 /*22*/]))
      {
        return true;
      }
    }
    iVar0++;
  }
  return false;
}