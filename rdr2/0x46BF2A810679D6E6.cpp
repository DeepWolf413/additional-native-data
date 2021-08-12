// camp_beaverhollow.ysc @ L15177
void func_512(int iParam0)
{
  float fVar0;
  int iVar1;
  int iVar2;

  fVar0 = 2.5f;
  if (func_38(512) && !func_12(2))
  {
    fVar0 = 1.25f;
  }
  if (func_937(&(iParam0->f_3483)))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3483) && VEHICLE::_IS_DRAFT_VEHICLE(iParam0->f_3483))
    {
      iVar1 = 0;
      while (iVar1 < 6)
      {
        iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0->f_3483, iVar1);
        if (!ENTITY::IS_ENTITY_DEAD(iVar2))
        {
          PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
          VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iParam0->f_3483, PED::_0x46BF2A810679D6E6(iVar2, fVar0));
        }
        iVar1++;
      }
    }
  }
}