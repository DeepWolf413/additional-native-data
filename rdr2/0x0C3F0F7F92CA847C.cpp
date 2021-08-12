// beat_gang_camp_reminder.ysc @ L1388
void func_28()
{
  int iVar0;

  if (bLocal_430)
  {
    func_112(Global_35, 1);
    func_113(iLocal_168, 1);
    func_114(&uLocal_413);
    if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
      {
        VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar0, 50f);
      }
    }
    bLocal_430 = false;
  }
}