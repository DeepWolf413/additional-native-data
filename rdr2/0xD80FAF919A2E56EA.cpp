// ambush_odr_hso.ysc @ L3724
void func_133()
{
  int iVar0;
  int iVar1;
  char* sVar2;
  vector3 vVar3[2];
  float fVar10;

  if (ENTITY::IS_ENTITY_DEAD(Local_179.f_49[0]))
  {
    return;
  }
  iVar0 = 6;
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(Local_179.f_49[0], iVar1))
    {
      VEHICLE::SET_VEHICLE_EXTRA(Local_179.f_49[0], iVar1, true);
    }
    iVar1++;
  }
  sVar2 = func_276(uLocal_533);
  TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 0, &(vVar3[0 /*3*/]));
  TASK::WAYPOINT_RECORDING_GET_COORD(sVar2, 1, &(vVar3[1 /*3*/]));
  func_102(&(vVar3[0 /*3*/]), 1, 10, 0);
  fVar10 = func_294(vVar3[0 /*3*/], vVar3[1 /*3*/], 1);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_179.f_49[0], vVar3[0 /*3*/], fVar10, true, false, true);
  PROPSET::_0xD80FAF919A2E56EA(Local_179.f_49[0], joaat("PG_RE_ODRISCOLLWAGON01X"));
  func_246(&Local_179, 0, 4);
}