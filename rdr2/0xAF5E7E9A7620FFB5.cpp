// ambush_exc_wagon_turret.ysc @ L3423
void func_132()
{
  int iVar0;
  int iVar1;
  char* sVar2;
  vector3 vVar3[2];
  float fVar10;

  if (ENTITY::IS_ENTITY_DEAD(Local_15.f_49[0]))
  {
    return;
  }
  iVar0 = 6;
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(Local_15.f_49[0], iVar1))
    {
      VEHICLE::SET_VEHICLE_EXTRA(Local_15.f_49[0], iVar1, true);
    }
    iVar1++;
  }
  sVar2 = func_189(&Local_274);
  TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, &(vVar3[0 /*3*/]));
  TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, &(vVar3[1 /*3*/]));
  func_102(&(vVar3[0 /*3*/]), 1, 10, 0);
  fVar10 = func_267(vVar3[0 /*3*/], vVar3[1 /*3*/], 1);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15.f_49[0], vVar3[0 /*3*/], fVar10, true, false, true);
}