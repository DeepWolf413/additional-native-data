// abigail2_1.ysc @ L81752
void func_2421(var uParam0)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
  {
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 6)
    {
      iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), iVar0);
      if (!ENTITY::IS_ENTITY_DEAD(iVar1))
      {
        PED::DELETE_PED(&iVar1);
      }
      iVar0++;
    }
  }
}