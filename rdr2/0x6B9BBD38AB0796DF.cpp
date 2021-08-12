// beat_arms_deal.ysc @ L1177
void func_25(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
  {
    iVar1 = 12;
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
      if (iVar0 != 0 && VEHICLE::DOES_EXTRA_EXIST(iLocal_34, iVar0))
      {
        VEHICLE::SET_VEHICLE_EXTRA(iLocal_34, iVar0, true);
      }
      iVar0++;
    }
    if (!ENTITY::IS_ENTITY_DEAD(Local_503[0 /*12*/].f_8))
    {
      ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_503[0 /*12*/].f_8, iLocal_34, 0, Local_503[0 /*12*/], 0f, 0f, Local_503[0 /*12*/].f_3, true, false, true, false, 2, true, true, false);
    }
  }
}