// act_cinema.ysc @ L110207
int func_979()
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_878();
  iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
  if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && (((PED::IS_PED_IN_FLYING_VEHICLE(iVar1) || Global_2426865[bVar0 /*449*/].f_71.f_3 == 2) || Global_2426865[bVar0 /*449*/].f_71.f_3 == 3) || Global_2426865[bVar0 /*449*/].f_71.f_3 == 4))
  {
    return 1;
  }
  return 0;
}