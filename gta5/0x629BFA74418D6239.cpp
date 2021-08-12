// abigail1.ysc @ L38345
void func_270(int iParam0)
{
  if (iParam0 == -1)
  {
    return;
  }
  if (func_265(&(Global_76066.f_555[0 /*21*/]), iParam0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Global_76066.f_139[iParam0]))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_76066.f_139[iParam0], true, true);
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_76066.f_139[iParam0]));
      Global_76066.f_139[iParam0] = 0;
    }
    if (MISC::IS_BIT_SET(Global_76066.f_555[0 /*21*/].f_9, 13))
    {
      func_227(iParam0, 0);
    }
  }
}