// rcm_calderon22.ysc @ L6960
bool func_268(int iParam0, var uParam1)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[24 /*49*/].f_43))
  {
    *iParam0 = Global_1347702[24 /*49*/].f_43;
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
    func_533(iParam0, uParam1);
    iParam0->f_6 = 1;
    return true;
  }
  if (PED::GET_CLOSEST_PED(func_370(), 2.5f, 1, 1, &iVar0, 0, 1, 0, -1))
  {
    if (func_192(iVar0, 0) && PED::IS_PED_MODEL(iVar0, func_534()))
    {
      *iParam0 = iVar0;
      func_533(iParam0, uParam1);
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
      iParam0->f_6 = 1;
      return true;
    }
  }
  return false;
}