// drunk.ysc @ L5326
void func_179()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, false))
  {
    return;
  }
  iVar0 = Local_43.f_1;
  if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, false))
  {
    iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, false);
    iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
    if (!Local_43.f_1 == iVar2)
    {
      return;
    }
    iVar0 = iVar1;
  }
  else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
  {
    return;
  }
  fLocal_53 = 0f;
  func_142(iVar0, 0f);
}